*This project has been created as part of the 42 curriculum by [jumoreir].*

<div align="center">

# LIBFT &nbsp;·&nbsp; <sub>by jumoreir</sub>

![C](https://img.shields.io/badge/C-language-blue?style=flat-square)
![42](https://img.shields.io/badge/42-school-black?style=flat-square)
![Norminette](https://img.shields.io/badge/norminette-passing-success?style=flat-square)
![Status](https://img.shields.io/badge/status-finished-brightgreen?style=flat-square)

*── Your own libc, built from scratch ──*

</div>

---

## Description

**Libft** is the first project at 42 and one of the most fundamental. The goal is to recreate standard C library functions (`libc`) from scratch — since using those functions is forbidden in the school's projects. The result is a static library (`libft.a`) that can be linked to future projects and expanded over time.

This project covers:
- String and memory manipulation
- Character classification and conversion
- Linked list operations
- Output functions using file descriptors

**Key learnings:**
- Organizing and splitting a project into stages
- RTFM 📣

---

## Instructions

### Compilation

```bash
make          # compiles the library (libft.a)
make bonus    # includes linked list functions
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + make
```

### Linking to your project

```bash
gcc your_file.c -L. -lft -o your_program
```

---

## Library

### Technical considerations

- Declaring global variables is forbidden.
- Subfunctions of complex functions must be declared as `static`.
- All `.c` files must compile with the mandatory flags.
- The library must be created with the `ar` command — using `libtool` is forbidden.
- Submitting unused files is forbidden.

### Norminette

42 projects must follow the **Norm**, the school's coding standard:

- Using `for`, `do while`, `switch`, `case` or `goto` is forbidden
- Maximum of 25 lines per function and 5 functions per file
- Maximum of 5 variables per function
- Declaring and assigning on the same line is forbidden (except for `static`)

Tools:
- [Norminette](https://github.com/42School/norminette) — automatically checks your code
- [42 Header](https://github.com/42Paris/42header) — standard header for Vim

---

### Functions from `<ctype.h>`

| Function | Description |
|---|---|
| `ft_isalpha` | Alphabetic character test |
| `ft_isdigit` | Decimal-digit character test |
| `ft_isalnum` | Alphanumeric character test |
| `ft_isascii` | Test for ASCII character |
| `ft_isprint` | Printing character test |
| `ft_isupper` | Upper-case character test |
| `ft_islower` | Lower-case character test |
| `ft_toupper` | Lower case to upper case letter conversion |
| `ft_tolower` | Upper case to lower case letter conversion |

### Functions from `<stdlib.h>`

| Function | Description |
|---|---|
| `ft_atoi` | Convert ASCII string to integer |
| `ft_calloc` | Memory allocation |

### Functions from `<strings.h>`

| Function | Description |
|---|---|
| `ft_bzero` | Write zeroes to a byte string |
| `ft_memset` | Write a byte to a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy byte string (handles overlap) |
| `ft_memchr` | Locate byte in byte string |
| `ft_memcmp` | Compare byte string |
| `ft_memccpy` | Copy string until character found |

### Functions from `<string.h>`

| Function | Description |
|---|---|
| `ft_strlen` | Find length of string |
| `ft_strchr` | Locate character in string (first occurrence) |
| `ft_strrchr` | Locate character in string (last occurrence) |
| `ft_strncmp` | Compare strings (size-bounded) |
| `ft_strcmp` | Compare strings |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strnstr` | Locate a substring in a string (size-bounded) |
| `ft_strstr` | Locate a substring in a string |
| `ft_strdup` | Duplicate a string using malloc |

### Non-standard functions

| Function | Description |
|---|---|
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings into a new string |
| `ft_strtrim` | Trim beginning and end of string |
| `ft_split` | Split string by delimiter into array of strings |
| `ft_itoa` | Convert integer to ASCII string |
| `ft_strmapi` | Create new string by applying function to each char |
| `ft_putchar_fd` | Output a character to given file descriptor |
| `ft_putstr_fd` | Output a string to given file descriptor |
| `ft_putendl_fd` | Output a string with newline to given file descriptor |
| `ft_putnbr_fd` | Output an integer to given file descriptor |

### Bonus — Linked list functions

Uses a custom `t_list` structure with two members: `content` (the node's data) and `next` (pointer to the next node, or `NULL`).

| Function | Description |
|---|---|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add new element at beginning of list |
| `ft_lstadd_back` | Add new element at end of list |
| `ft_lstsize` | Count elements of a list |
| `ft_lstlast` | Find last element of list |
| `ft_lstdelone` | Delete one element from list |
| `ft_lstclear` | Delete sequence of elements from a starting point |
| `ft_lstiter` | Apply function to content of all list's elements |
| `ft_lstmap` | Apply function to all elements into a new list |

---

## Resources

### References

- [C Standard Library — cppreference.com](https://en.cppreference.com/w/c)
- [man7.org — Linux man pages](https://man7.org/linux/man-pages/)
- [42 Norminette — GitHub](https://github.com/42School/norminette)
- [42 Header for Vim — GitHub](https://github.com/42Paris/42header)
- [Understanding linked lists in C — learn-c.org](https://www.learn-c.org/en/Linked_lists)
