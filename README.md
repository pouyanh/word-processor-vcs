## Word Processor Version Control
A Cross Platform Office Suites' Word Processor Version Control System

### Table of Contents
* [What is it about](#what-is-it-about)
* [How does this work](#how-does-this-work)
* [Comparable versions](#comparable-versions)
	* [Office Open XML Docx](office-open-xml-docx)

### <a name="what-is-it-about"></a>What is it about
When producing a collaborative documentation file (Research result, Development documentation, Product guideline, etc.) via different word processor softwares like 
LibreOffice, OpenOffice or MSWord, the biggest problem is to merge 'em all. This tool plays this role here for authors. Every privilleged user can retrieve different 
versions of shared document file, change content, submit changes and put them on server.

### <a name="how-does-this-work"></a>How does this work
#### Put On Server
New document file is converted to a comparable content and differences will be tracked, committed and pushed to server.

## Fetch From Server
Raw, comparable content is fetched from server and will be converted to desired output for serve.

### <a name="comparable-versions"></a>Comparable versions
#### <a name="office-open-xml-docx"></a>Office Open XML Docx
Docx is a compressed archive containing document data in form of XML. So comparable version of docx is the decompressed archive files esp. the document.xml.
