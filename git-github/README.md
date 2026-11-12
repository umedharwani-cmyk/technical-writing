# Git and GitHub

Git tracks changes to files so you can see history, undo mistakes and work in
parallel. GitHub hosts Git repositories online and adds collaboration tools.

**Example:** [`example/`](example) has a small calculator project, a
`.gitignore`, and [`walkthrough.md`](example/walkthrough.md), which records a
real branch, merge conflict and push.

## 1. Version control systems

| Type | How it works | Examples |
|---|---|---|
| Local | History kept on one computer | RCS |
| Centralized | One central server holds history | SVN, CVS |
| Distributed | Everyone has the full history | Git |

Because Git is distributed, you can commit, branch and read history offline.

## 2. Git vs GitHub

| Git | GitHub |
|---|---|
| Tool installed on your computer | Website hosting repositories |
| Tracks changes | Adds pull requests, issues, code review |
| Works offline | Needs internet for sharing |

## 3. The three areas

```text
Working directory --git add--> Staging area --git commit--> Local repo --git push--> GitHub
```

You edit files in the working directory, choose what goes into the next commit
by staging it, commit to save a snapshot, and push to share it.

## 4. Setup

```bash
git --version
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

## 5. Everyday commands

| Command | Purpose |
|---|---|
| `git init` | Start a repository |
| `git status` | See modified and staged files |
| `git add <file>` / `git add .` | Stage changes |
| `git commit -m "msg"` | Save a snapshot |
| `git log --oneline` | View history |
| `git clone <url>` | Copy a remote repo |
| `git pull` | Fetch and merge remote changes |
| `git push` | Upload commits |
| `git switch -c <name>` | Create and switch to a branch |
| `git merge <name>` | Merge a branch into the current one |
| `git remote add origin <url>` | Link to GitHub |

## 6. Publishing a project

```bash
git remote add origin https://github.com/<user>/<repo>.git
git branch -M main
git push -u origin main
```

`-u` remembers the remote, so later you can just type `git push`.

## 7. Branching and merging

A branch is a separate line of work, so unfinished changes do not break `main`.

```bash
git switch -c feature-x      # make changes, commit
git switch main
git merge feature-x
```

**Merge conflicts** happen when both branches changed the same lines. Git
marks them in the file:

```text
<<<<<<< HEAD
your version
=======
their version
>>>>>>> feature-x
```

Edit the file to the final text, delete the markers, then `git add` and
`git commit`. The full example is in `example/walkthrough.md`.

## 8. Collaborating on GitHub

- **Pull request:** push a branch, open a PR, get it reviewed, then merge.
- **Fork:** your own copy of someone else's repo, used to contribute to projects you do not own.
- **Issues:** track bugs and tasks. **Projects:** boards for planning.
- **README.md:** the project's front page (title, description, how to run it).

## 9. Habits worth keeping

- Write clear commit messages ("Add divide-by-zero check", not "changes").
- Commit small, related changes.
- Pull before you start working.
- Never commit passwords or API keys; list private files in `.gitignore`.

## What I learned

Git made sense once I pictured the three areas; most of my early mistakes were
forgetting to `git add` before committing. Branches felt unnecessary until I
broke `main` once, and the merge conflict exercise showed that conflicts are
just a normal text edit, not a disaster. Using GitHub for this portfolio also
taught me that a good README matters as much as the code.
