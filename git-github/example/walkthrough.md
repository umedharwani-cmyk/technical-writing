# Practice Walkthrough: Calculator + Merge Conflict

I ran these commands in order on a fresh folder. The output shown is what Git
actually printed.

## 1. Create the repo and first commit

```bash
mkdir calculator && cd calculator
git init -b main
cp ../calculator.py .
git add .
git commit -m "Add basic calculator"
```

## 2. Work on a feature branch

```bash
git switch -c feature-power
# add a power() function to calculator.py
git commit -am "Add power function"
```

## 3. Make a different change on main

```bash
git switch main
# add a modulo() function at the same place in calculator.py
git commit -am "Add modulo function"
```

Now `main` and `feature-power` have both edited the same spot.

## 4. Merge and hit a conflict

```bash
git merge feature-power
```

```text
Auto-merging calculator.py
CONFLICT (content): Merge conflict in calculator.py
Automatic merge failed; fix conflicts and then commit the result.
```

`git status` shows `UU calculator.py` (both sides modified). Inside the file
Git marks the clash:

```text
<<<<<<< HEAD
def modulo(a, b):
    return a % b
=======
def power(a, b):
    return a ** b
>>>>>>> feature-power
```

## 5. Resolve it

I wanted both functions, so I deleted the three marker lines (`<<<<<<<`,
`=======`, `>>>>>>>`), kept both blocks, then:

```bash
git add calculator.py
git commit -m "Merge feature-power into main"
git log --oneline --graph --all
```

## 6. Publish to GitHub

```bash
git remote add origin https://github.com/<your-username>/calculator.git
git push -u origin main
```

If your first branch is called `master`, run `git branch -M main` before pushing.

## 7. Pull request flow (on GitHub)

1. `git switch -c fix-readme`, edit, commit.
2. `git push -u origin fix-readme`.
3. On GitHub click **Compare & pull request**, write a short description.
4. After review, click **Merge pull request**, then `git switch main && git pull`.
