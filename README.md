<p align="center">
  <img src="assets/ChatGPT Image 28. Juli 2025, 19_03_20.png" alt="push swap demo" width="500"/>
</p>

## Introduction

A 42 school algorithm project where the goal is to sort a stack of integers using a limited set of operations (sa, pb, ra, etc.). The program implements a custom sorting algorithm that tries to produce a small (but not necessarily optimal) number of operations to sort the input.

## 🧾 Input

The program expects a list of integers as command-line arguments.
Each number must be separated by a space. The following constraints apply:

- The list **must not contain duplicate values**.
- All inputs must be **valid 32-bit signed integers**.
- The number of arguments is limited only by the bounds of the integer type.

### 🔹 Example Input (small set, ≤ 5 elements):
```bash
./push_swap 10 -5 1 5 -12
```
### 🔹 Example Input (big set, ≤ 5 elements):
```bash
./push_swap -4757 -3611 643 -1771 -4818 4903 -2991 1636 4716 -4711 3861 178 2854 -2258 -3131 3952 -3512 3081 -3362
```

## Aufgabe
To sort the input, we were given two stacks that we were only allowed to manipulate using 11 specific operations.

| Operation | Description                                                                 |
|-----------|-----------------------------------------------------------------------------|
| sa        | Swaps the top two elements of Stack A                                       |
| sb        | Swaps the top two elements of Stack B                                       |
| ss        | Executes `sa` and `sb` simultaneously                                       |
| pa        | Pushes the top element from Stack B onto Stack A                            |
| pb        | Pushes the top element from Stack A onto Stack B                            |
| ra        | Rotates Stack A upwards (first element becomes last)                        |
| rb        | Rotates Stack B upwards                                                     |
| rr        | Executes `ra` and `rb` simultaneously                                       |
| rra       | Rotates Stack A downwards (last element becomes first)                      |
| rrb       | Rotates Stack B downwards                                                   |
| rrr       | Executes `rra` and `rrb` simultaneously                                     |

## Algorithm

Wir haben eine vereinfachte version der Turk algorythmus benutzt. 
