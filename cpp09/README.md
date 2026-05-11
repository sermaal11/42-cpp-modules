# CPP Module 09

Subject focus: STL.

## Module-specific rule

The subject requires standard containers. Once a container is used in an exercise, it cannot be reused for the rest of the module. `ex02` must use at least two different containers and handle at least 3000 integers.

## Exercises

| Exercise | Official title | Program | Subject requirement |
| --- | --- | --- | --- |
| ex00 | Bitcoin Exchange | `btc` | Read `date | value` input and output the value multiplied by the matching historical exchange rate. |
| ex01 | Reverse Polish Notation | `RPN` | Evaluate a Reverse Polish Notation expression using single-digit operands and `+ - * /`. |
| ex02 | PmergeMe | `PmergeMe` | Sort a positive integer sequence with a merge-insert/Ford-Johnson style algorithm and compare two containers. |

## Data

`ex00/data.csv` is included and was extracted from `cpp_09.tar`, so `./btc` can be run directly from the `ex00` directory.

## Build

```sh
cd ex00
make
./btc test/simple.txt
make fclean
```
