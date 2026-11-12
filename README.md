# TW Learning Portfolio

Notes and worked examples from my Technical Writing course. Each folder has a
`README.md` with my notes and an `example/` folder with files you can run.

| Topic | Notes | Example |
|---|---|---|
| LaTeX | [latex/README.md](latex/README.md) | [latex/example](latex/example) |
| Beamer | [beamer/README.md](beamer/README.md) | [beamer/example](beamer/example) |
| Doxygen | [doxygen/README.md](doxygen/README.md) | [doxygen/example](doxygen/example) |
| Google Docs | [google/README.md](google/README.md) | [google/example](google/example) |
| Git and GitHub | [git-github/README.md](git-github/README.md) | [git-github/example](git-github/example) |

## Running the examples

```bash
# LaTeX and Beamer
pdflatex latex/example/example.tex
pdflatex beamer/example/presentation.tex   # run from inside the folder

# Doxygen (needs doxygen and graphviz)
cd doxygen/example && doxygen Doxyfile      # open docs/html/index.html
```

