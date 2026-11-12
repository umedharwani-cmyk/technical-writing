# Doxygen

Doxygen builds documentation from comments in source code. You write special
comment blocks next to functions and classes, run one command, and get an HTML
(or LaTeX/PDF) reference. It supports C, C++, Java, Python and others.

**Example:** [`example/`](example) has a documented C++ file, a Python file, and a
ready `Doxyfile`.

## 1. Install

| OS | Command |
|---|---|
| Windows | Installer from doxygen.nl |
| macOS | `brew install doxygen` |
| Ubuntu/Debian | `sudo apt-get install doxygen graphviz` |

Check with `doxygen --version`. Graphviz is only needed for diagrams.

## 2. Workflow

```bash
doxygen -g Doxyfile     # 1. create a config file
# 2. edit Doxyfile (INPUT, EXTRACT_ALL, ...)
doxygen Doxyfile        # 3. generate docs
# 4. open html/index.html
```

Useful `Doxyfile` settings:

```text
INPUT         = calculator.cpp
EXTRACT_ALL   = YES      # document even undocumented items
GENERATE_HTML = YES
GENERATE_LATEX = NO
HAVE_DOT      = YES      # call/inheritance graphs (needs Graphviz)
```

## 3. Comment syntax

C/C++:

```cpp
/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return The sum.
 */
int add(int a, int b);
```

Python docstrings work too. Use Doxygen commands inside them:

```python
def area(width, height):
    """
    @brief Returns the area of a rectangle.
    @param width  Width of the rectangle.
    @param height Height of the rectangle.
    @return width multiplied by height.
    """
    return width * height
```

(Sphinx-style `:param x:` fields are not Doxygen syntax, so use `@param`.)

## 4. Common commands

| Command | Purpose |
|---|---|
| `@file` | Describes the file |
| `@brief` | One-line summary |
| `@details` | Longer explanation |
| `@param` | A parameter |
| `@return` | The return value |
| `@class` | Documents a class |
| `@author`, `@version` | Metadata |
| `@note`, `@see` | Extra notes and cross-references |

Both `@` and `\` work as the prefix (`\brief` is the same as `@brief`).
Members can also have short trailing comments: `int count_; ///< Current count.`

## 5. Classes

```cpp
/**
 * @class Counter
 * @brief Keeps a running count.
 */
class Counter {
public:
    /** @brief Increases the count by one. */
    void increment();
};
```

## 6. Groups and diagrams

- **Groups:** `@defgroup` and `@ingroup` collect related items on one page.
- **Diagrams:** with `HAVE_DOT = YES` and Graphviz installed, Doxygen draws
  call graphs, inheritance diagrams and include graphs. `@dot` blocks and
  PlantUML can embed custom diagrams.

## 7. Output formats

| Format | Setting |
|---|---|
| HTML | `GENERATE_HTML = YES` |
| LaTeX (for PDF) | `GENERATE_LATEX = YES` |
| RTF, XML, Man, DocBook | `GENERATE_RTF`, `GENERATE_XML`, `GENERATE_MAN`, `GENERATE_DOCBOOK` |

## 8. With Git

Commit the `Doxyfile` but not the generated `docs/` folder (add it to
`.gitignore`). Regenerate when code changes, and optionally publish the HTML
with GitHub Pages.

## 9. Trying the example

```bash
cd doxygen/example
doxygen Doxyfile
```

Open `docs/html/index.html`. The functions `add`, `subtract`, `divide` and the
`Counter` class appear with their parameters, and `@note` and `@see` show up as
extra blocks. I tested this with Doxygen 1.9.8.

## What I learned

Doxygen only documents what you write, so good comments matter more than the
tool. I learned to separate `@brief` from `@details` and to describe every
`@param`. With `EXTRACT_ALL = YES` it lists undocumented code too, which hid
missing comments from me at first, so I now turn it off once the basics work.
The Python docstring syntax was a gotcha: it needs `@param`, not the Sphinx
style I had in my first draft.
