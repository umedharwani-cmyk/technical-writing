# Google Docs

Google Docs is a browser-based word processor. Documents live in Google Drive,
save automatically, and several people can edit at once. I used it for reports
and collaborative writing.

**Example:** [`example/`](example) has a sample report and a list of features to try on it.

## 1. Creating a document

1. Open docs.google.com and sign in.
2. Choose **Blank document** or a template (report, resume, meeting notes).
3. Type, format with the toolbar, and rename it at the top.

## 2. Structure with styles

Use paragraph styles (Title, Heading 1-3, Normal text) instead of manually
enlarging text. They keep the look consistent, feed the navigation outline and
let you insert a table of contents with **Insert > Table of contents**.

## 3. Collaboration

**Share** gives three permission levels:

| Permission | Can do |
|---|---|
| Viewer | Read only |
| Commenter | Read and comment |
| Editor | Change the document |

- **Suggesting mode** tracks edits that the owner accepts or rejects.
- **Comments** can be assigned and resolved.
- Access can be removed or given an expiry date.

## 4. Version history

**File > Version history > See version history** shows who changed what and
lets you restore an older copy. Naming a version (e.g. "Submitted") makes it easy to find.

## 5. Images, drawings, tables, lists

- **Insert > Image** from upload, Drive, Photos or the web.
- **Insert > Drawing** for shapes, arrows and simple flowcharts.
- **Insert > Table** to choose rows and columns.
- Lists: bulleted, numbered, and checklists.

## 6. Equations and code

**Insert > Equation** lets you type LaTeX-like commands such as `\alpha` or
`\frac{a}{b}` followed by a space. For code, switch to a monospace font (e.g.
Courier New) or use a code-formatting add-on.

## 7. Citations

**Tools > Citations** supports MLA, APA and Chicago. Add a source, insert the
in-text citation, then generate the bibliography.

## 8. Exporting

**File > Download** offers PDF, DOCX, ODT, RTF, HTML and plain text. **File >
Share > Publish to web** makes a public page.

## 9. Other tools

It connects with Drive, Sheets, Slides, Forms, Calendar and Meet, and Apps
Script can automate tasks.

## Google Docs vs Doxygen

| | Doxygen | Google Docs |
|---|---|---|
| Purpose | API/code reference | Reports, proposals, notes |
| Collaboration | Code review | Real-time editing |
| Output | HTML, LaTeX/PDF | PDF, DOCX, web |

I use Doxygen for what the code does and Google Docs for explaining the project to people.

## What I learned

Real heading styles matter: with them, the table of contents and outline work
in seconds, and without them they do not. Suggesting mode and version history
made group work safer because nothing gets silently overwritten. The weak spot
is maths and code, where LaTeX is clearly better.
