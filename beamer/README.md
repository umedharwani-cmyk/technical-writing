# Beamer

Beamer is a LaTeX class for slides. Each slide is a `frame`, and the result is a
PDF. I used it because it handles equations and code better than normal
slide software.

**Example:** [`example/presentation.tex`](example/presentation.tex), compile
with `pdflatex presentation.tex` (9 PDF pages, because overlays add pages).

## 1. Minimal presentation

```latex
\documentclass{beamer}
\usetheme{Madrid}

\title{Introduction to Computer Science}
\author{Your Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
  \titlepage
\end{frame}

\begin{frame}{Main Points}
  \begin{itemize}
    \item First item
    \item Second item
  \end{itemize}
\end{frame}

\end{document}
```

- `\documentclass{beamer}` replaces `article`.
- `\title`, `\author`, `\institute`, `\date` go before `\begin{document}`;
  `\titlepage` inside a frame shows them.
- `\begin{frame}{Title}` makes one slide with a title.
- `\usetheme{...}` changes the look (Madrid, Berlin, Warsaw, etc.).

## 2. Lists

`itemize` gives bullets, `enumerate` gives numbers, `description` gives labelled items.

## 3. Equations

Same as LaTeX: `\( ... \)` inline and `\[ ... \]` displayed.

```latex
\begin{frame}{Equation}
\[ x=\frac{-b\pm\sqrt{b^2-4ac}}{2a} \]
\end{frame}
```

## 4. Abstract and introduction slides

Beamer does have an `abstract` environment, but a frame titled "Abstract" or
"Introduction" is simpler and looks consistent with the other slides.

## 5. Overlays

Overlay specs reveal content step by step. `<2->` means "from step 2 onwards".

```latex
\begin{itemize}
  \item<1-> First point
  \item<2-> Second point
  \item<3-> Third point
\end{itemize}
```

Each step becomes its own PDF page, which is why the 7 frames in my example give 9 pages.
Transition effects such as `\transdissolve` also exist, but they only show in
PDF viewers that support them.

## 6. Code on slides

Frames containing `verbatim` must be marked `fragile`:

```latex
\begin{frame}[fragile]{C++ Code}
\begin{verbatim}
int main() { return 0; }
\end{verbatim}
\end{frame}
```

## 7. Compiling

```bash
pdflatex presentation.tex
```

Open the PDF in full screen to present.

## Tips I followed

- One idea per slide, short titles.
- Use overlays only when order matters.
- Keep the same theme throughout.
- Compile often so errors are easy to find.

## What I learned

Beamer felt familiar after LaTeX, since only the document class and `frame`
environment are new. The surprising parts were that overlays multiply the page
count, and that code needs `[fragile]` or compilation fails with an unhelpful
error. I would use it again for technical talks; for image-heavy slides a normal
slide tool is easier.
