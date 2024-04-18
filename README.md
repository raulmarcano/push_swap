<h2 align="center">👋 Welcome to:</h2>
<h1 align="center">Push_swap➡️🔄 - Sorting Algorithm Project</h1>

<p style="text-align: justify;" align="center">
  Push_swap is a project aimed at sorting a stack of integers in ascending order using a specific set of operations.
</p>

<h3 align="center">Languages and Tools:</h3>
<p align="center">
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/>
    <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/>
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/>
</p>

## Installation

To use Push_swap, follow these steps:

1. Clone the repository.
2. Run the `make` command in the project root directory.

## Usage

To run the Push_swap program, execute the following command:

``
./push_swap 3 5 6 9 8
``

## Project Rules and Operations

- You have two stacks, named a and b.
- At the beginning:
  - Stack a contains a random number of unique positive and/or negative integers.
  - Stack b is empty.
- The goal is to sort the numbers in stack a in ascending order.
- Available operations:
  - `sa: swap a` - swap the first two elements of stack a.
  - `sb: swap b` - swap the first two elements of stack b.
  - `ss` - swap a and b simultaneously.
  - `pa: push a` - take the first element of stack b and push it onto stack a.
  - `pb: push b` - take the first element of stack a and push it onto stack b.
  - `ra: rotate a` - move all elements of stack a up by one position.
  - `rb: rotate b` - move all elements of stack b up by one position.
  - `rr` - ra and rb at the same time.
  - `rra: reverse rotate a` - move all elements of stack a down by one position.
  - `rrb: reverse rotate b` - move all elements of stack b down by one position.
  - `rrr` - rra and rrb at the same time.


## Error Handling
- If no parameters are specified, the program should not display anything and return control to the user.
- In case of error, the program should display "Error" followed by a newline on the standard error output. Possible errors include non-integer arguments, arguments exceeding the integer range, and duplicate numbers.
