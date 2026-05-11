# 42 C++ Modules

Collection of C++ modules completed at 42 Madrid.

The projects follow the 42 subjects included in each module directory as `cppXX.pdf`. All exercises are built with C++98 and the usual 42 flags:

```sh
c++ -Wall -Wextra -Werror -std=c++98
```

## Modules

| Module | Subject focus | Exercises included |
| --- | --- | --- |
| [cpp00](cpp00) | Namespaces, classes, member functions, stdio streams, initialization lists, static and const basics | ex00-ex02 |
| [cpp01](cpp01) | Memory allocation, pointers to members, references and switch statements | ex00-ex06 |
| [cpp02](cpp02) | Ad-hoc polymorphism, operator overloads and Orthodox Canonical Form | ex00-ex03 |
| [cpp03](cpp03) | Inheritance | ex00-ex03 |
| [cpp04](cpp04) | Subtype polymorphism, abstract classes and interfaces | ex00-ex02 |
| [cpp05](cpp05) | Repetition and exceptions | ex00-ex03 |
| [cpp06](cpp06) | C++ casts | ex00-ex02 |
| [cpp07](cpp07) | C++ templates | ex00-ex02 |
| [cpp08](cpp08) | Templated containers, iterators and algorithms | ex00-ex02 |
| [cpp09](cpp09) | STL containers | ex00-ex02 |

## Build

Each exercise has its own Makefile. Build from the exercise directory:

```sh
cd cpp09/ex00
make
./btc test/simple.txt
make fclean
```

## Notes

- `cpp09/ex00/data.csv` is included and was extracted from `cpp09/cpp_09.tar`, so the Bitcoin Exchange exercise can run directly from its exercise directory.
- Some subjects mark the last exercise of a module as optional. The repository documents the exercises currently present in each module directory.
- Generated objects and binaries should not be committed. Run `make fclean` before staging changes.
