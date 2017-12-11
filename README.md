# wind-translator

*Code to Binary Translator for the Wind programming language*

## Intro

This Repo contains development code and a buildable executable for Wind's translator. The Translator uses a special algorithm for compiling called *Direct Translation*, as opposed to traditional methods of tokenization, parsing, generation etc.


### `Direct Translation`:

Direct Translation is the process of direct matching of a code string. However, these matches are not always adjacent. Direct Translation ignores white space. The goal of Direct Translation is to allow a very tight bond between code and data, much more so than popular conventional programming languages. It also aims to majorly cut down time spent compiling code.


**Example**:

```
+(3 4).out()
     |
     |
     |
  Instructions:
[
   Add,
   ExpStart,
   Int: 3,
   Int: 4,
   ExpEnd,
   Apply,
   Out,
   ExpStart,
   ExpEnd
]    
```
