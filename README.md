## Word Processor Version Control
A Cross Platform Office Suites' Word Processor Version Control System

### Table of Contents
* [What is it about](#what-is-it-about)
* [How does this work](#how-does-this-work)
* [Comparable versions](#comparable-versions)
	* [Office Open XML Docx](office-open-xml-docx)
* [Source Code Directory Structure](#source-code-directory-structure)
* [Coding Conventions](#coding-conventions)
    * [Class Definition and Implementation](#class-definition-and-implementation)
    * [Macros](#macros)
    * [Include Guard](#include-guard)
    * [Files' Extension and Macro Suffix](#files'-extension-and-macro-suffix)
    * [Namespace](#namespace)
    * [Class Name](#class-name)
    * [Method Name](#method-name)
    * [Variable Name](#variable-name)
    * [Constant Name](#constant-name)

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


### <a name="directory-structure"></a>Directory Structure
root/
│
├── configure (The configure script file)
├── Makefile (The gcc make file)
│
├── README.md (Readme of project)
├── AUTHORS (Authors of project)
├── LICENSE (Project license file)
├── COPYING (Plaintext copy of project license)
│
├── src/ (Just the application source files)
│   │
│   ├── <Module Directories>/
│   ├── include/ (Application's own-overriden or self-specific definition files)
│   │   │
│   │   └── <App Namespace>/ (Application specific definition header files)
│   │       │
│   │       └── view/ (Application's user interface template files and headers)
│   │           │
│   │           ├── raw/ (Output of ../ui/*.ui header files)
│   │           ├── ui/ (Template (.ui) files [usually generated by qt tools])
│   │           └── *.h (View classes based on raw/* classes)
│   │
│   └── app/ (Application's source files)
│       │
│       ├── <App Namespace>/ (Application's classes' implementation source files)
│       │   │
│       │   └── view/ (Application's user interface implementation source files)
│       │       │
│       │       └── *.cpp (Presentation Layer source code: View classes implementation source files)
│       │
│       └── main.cpp
│
├── include/ (Project's public header files, Application library interfaces, Necessary third-party headers not existing under /usr/local/include)
├── lib/ (Any library which project, any third-party or other needs in development)
├── test/ (Tests of project)
├── tools/ (Scripts, tools and module required during development such as ODB Build, Insert, Migrate jobz)
├── build/ (Intermediate files generated during build process)
└── bin/ (Generated executable files)

### <a name="coding-conventions"></a>Coding Conventions
#### <a name="class-definition-and-implementation"></a>Class Definition and Implementation
* Class Defination goes under include:
  e.g.  include/<Project Name>/<Module Name>/<Class Name>.h <── Namespace just as PSR defines (As same as directory names, hierarchically like that)
* Class implementation goes under src:
  e.g.  src/<Project Name>/<Module Name>/<Class Name>.cpp

#### <a name="macros"></a>Macros
Prefix all definition macros with project name:
```cpp
#define MERCHACK_INC_H_PRODUCT
```

#### <a name="include-guard"></a>Include Guard
Header files' include guard macro name would be like this:
```cpp
#ifndef MERCHACK_<UNDERSCORE_SEPARATED_NAMESPACE>_<FILE_SUFFIX>
#define MERCHACK_<UNDERSCORE_SEPARATED_NAMESPACE>_<FILE_SUFFIX>

...

#endif
```

#### <a name="files'-extension-and-macro-suffix"></a>Files' Extension and Macro Suffix
Class Definition	───> .h	    ───> H
Class Implementation	───> .cpp   ───> CPP
Source File		───> .cpp   ───> CPP

#### <a name="namespace"></a>Namespace
Namespaces have to be in UpperCamelCase, nestedly as same as directory goes.

#### <a name="class-name"></a>Class Name
Class names should be in UpperCamelCase and be defined in namespaces which exactly follows directory which header is in:

merchack/model/product/unit.h
Merchack::Model::Product::Unit
└───────Namespace──────┘

#### <a name="method-name"></a>Method Name
Methods should be verbs in lowerCamelCase or a multi-word name that begins with a verb in lowercase:
```cpp
obj->isDiagonal();
obj->getOutput();
```

#### <a name="variable-name"></a>Variable Name
Local variables, instance variables, and class variables are also written in lowerCamelCase. Variable names should not start with underscore (_) or dollar sign ($) characters.
Variable names should be short yet meaningful. The choice of a variable name should be mnemonic — that is, designed to indicate to the casual observer the intent of its use. One-character variable names should be avoided except for temporary "throwaway" variables. Common names for temporary variables are i, j, k, m, and n for integers; c, d, and e for characters:
```cpp
obj->name;
obj->rowNumber;
obj->worldModel;
```

#### <a name="constant-name"></a>Constant Name
Constants should be written in uppercase characters separated by underscores. Constant names may also contain digits if appropriate, but not as the first character:
```cpp
THIS_IS_A_DEFINED_CONSTANT
```
