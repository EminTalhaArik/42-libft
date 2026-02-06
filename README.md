# 42 Libft Project

## Introduction
iThis project is an essential part of the 42 curriculum. The goal is to re-implement a series of standard C library functions, as well as some additional utility functions, to build a foundational understanding of C programming and data structures.

## What is Libft?
Libft is a personal library that you'll build throughout your journey at 42. It contains a set of custom-made functions that replicate the behavior of functions from the standard C library (`libc`), along with other useful functions that are not part of `libc`. This project is designed to teach you about:
*   Understanding how standard library functions work under the hood.
*   Manipulating memory and strings.
*   Writing clean, efficient, and well-documented C code.
*   The importance of creating your own reusable tools.


## Implemented Functions

### Part 1 - Libc Functions
*   `ft_isalpha`
*   `ft_isdigit`
*   `ft_isalnum`
*   `ft_isascii`
*   `ft_isprint`
*   `ft_strlen`
*   `ft_memset`
*   `ft_bzero`
*   `ft_memcpy`
*   `ft_memmove`
*   `ft_strlcpy`
*   `ft_strlcat`
*   `ft_toupper`
*   `ft_tolower`
*   `ft_strchr`
*   `ft_strrchr`
*   `ft_strncmp`
*   `ft_memchr`
*   `ft_memcmp`
*   `ft_strnstr`
*   `ft_atoi`
*   `ft_calloc`
*   `ft_strdup`

### Part 2 - Additional Functions
*   `ft_substr`
*   `ft_strjoin`
*   `ft_strtrim`
*   ... (Add more functions as you implement them)


## How to Use
To use the `libft` library in your projects, you need to compile it first:

1.  Clone the repository:
    ```bash
    git clone https://github.com/your_username/42-libft.git
    cd 42-libft
    ```
2.  Compile the library:
    ```bash
    make
    ```
    This will create a static library file named `libft.a`.

3.  Include `libft.h` in your C source files and link with `libft.a` during compilation:
    ```bash
    gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
    ```
    Or, if `libft.a` is in a different directory (e.g., `path/to/libft`):
    ```bash
    gcc -Wall -Wextra -Werror your_program.c -Ipath/to/libft -Lpath/to/libft -lft -o your_program
    ```


## Author
[Emin](https://github.com/emin)

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details (if you choose to add one).
