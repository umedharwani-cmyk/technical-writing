# LaTeX

LaTeX is a typesetting system where you write a plain-text `.tex` file and compile
it into a PDF. You describe the structure (sections, equations, tables) and
LaTeX handles the layout. It is the standard for papers and anything with a lot
of maths.

**Example:** [`example/example.tex`](example/example.tex) covers everything below.
Compile it with `pdflatex example.tex`.

## 1. Document structure

A file has a preamble (setup) and a body between `\begin{document}` and
`\end{document}`.

```latex
\documentclass[12pt,a4paper]{article}
\usepackage{amsmath}

\title{My Document}
\author{Your Name}
\date{\today}

\begin{document}
\maketitle
Hello, LaTeX!
\end{document}
```

Common classes are `article`, `report` and `book`. Packages are loaded in the
preamble with `\usepackage{}`.

| Package | Used for |
|---|---|
| `amsmath`, `amssymb` | Equations and extra symbols |
| `graphicx` | Images |
| `xcolor` | Colours |
| `geometry` | Margins, e.g. `\geometry{margin=2.5cm}` |

## 2. Text, sections and lists

```latex
\section{Introduction}
\subsection{Purpose}

\textbf{bold}, \textit{italic}, \underline{underlined}, \emph{emphasis}

\begin{itemize}  \item Bullet \end{itemize}
\begin{enumerate} \item Numbered \end{enumerate}
```

Commands are case-sensitive and start with a backslash.

## 3. Mathematics

Inline maths goes in `\( ... \)` (or `$ ... $`), displayed maths in `\[ ... \]`.

```latex
\(x^2 + y^2 = z^2\)

\[ \frac{a+b}{c} \qquad \sqrt[3]{x} \qquad \sum_{i=1}^{n} i \qquad \int_0^1 x\,dx \]

\[
A = \begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix}
\]

\begin{align}
x + y &= 10 \\
2x + y &= 15
\end{align}
```

- `^` is superscript, `_` is subscript, Greek letters are `\alpha`, `\beta`, `\pi`, etc.
- In matrices and `align`, `&` separates columns or marks the alignment point,
  and `\\` starts a new row or line.
- `align` needs `amsmath`.

## 4. Tables

```latex
\begin{tabular}{|c|c|c|}
\hline
Name & Subject & Marks \\
\hline
Asha & Maths & 90 \\
Ravi & Science & 85 \\
\hline
\end{tabular}
```

Column types: `l`, `c`, `r` (alignment) and `p{3cm}` (wrapping text).
`\multicolumn` merges columns; `\multirow` needs the `multirow` package.
To make a table float with a caption, wrap it in `\begin{table}[h] ... \end{table}`.
Placement options are `h` (here), `t` (top), `b` (bottom), `p` (own page), and
`H` (exactly here, needs the `float` package).

## 5. Figures and colours

```latex
\usepackage{graphicx}
\usepackage{xcolor}

\begin{figure}[h]
  \centering
  \includegraphics[width=0.5\textwidth]{sample.png}
  \caption{Sample figure}
  \label{fig:sample}
\end{figure}

See Figure~\ref{fig:sample}.
\textcolor{blue}{Blue text}
\definecolor{myblue}{RGB}{10,60,200}
```

## 6. Compiling

```bash
pdflatex filename.tex    # produces a PDF
latex filename.tex       # produces a DVI (older workflow)
```

Run it twice when you use `\label`/`\ref` or a table of contents, so the
references settle.

## What I learned

The main shift was thinking of the document as structure instead of
appearance. I never move anything by hand; I mark something as a section or
equation and LaTeX positions it. Equations were the biggest win compared to
Word. The things that tripped me up were forgetting `&` and `\\` in tables and
matrices, and missing `\end{...}` lines, which give confusing errors. Reading the
first error in the log, not the last, fixed most problems.

*Source: Technical Writing lectures on LaTeX environments, mathematical notation, tables, colours and figures.*
