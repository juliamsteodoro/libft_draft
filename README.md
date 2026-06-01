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

**Libft** é o primeiro projeto da 42 e um dos mais fundamentais. O objetivo é recriar funções padrão da biblioteca C (`libc`) do zero — já que o uso dessas funções é proibido nos projetos da escola. O resultado é uma biblioteca estática (`libft.a`) que pode ser linkada em projetos futuros e expandida ao longo do tempo.

Este projeto cobre:
- Manipulação de strings e memória
- Classificação e conversão de caracteres
- Operações com listas encadeadas
- Funções de output por file descriptor

**Principais aprendizados:**
- Organizar e dividir um projeto em etapas
- RTFM 📣 

---

## Instructions

### Compilation

```bash
make          # compila a biblioteca (libft.a)
make bonus    # inclui as funções de lista encadeada
make clean    # remove os arquivos objeto
make fclean   # remove os objetos e a libft.a
make re       # fclean + make
```

### Linking to your project

```bash
gcc your_file.c -L. -lft -o your_program
```

---

## Library

### Technical considerations

- É proibido declarar variáveis globais.
- Subfunções de funções complexas devem ser declaradas como `static`.
- Todos os `.c` devem compilar com as flags obrigatórias.
- A biblioteca deve ser criada com o comando `ar` — o uso de `libtool` é proibido.
- É proibido submeter arquivos não utilizados.

### Norminette

Os projetos da 42 devem seguir a **Norm**, o padrão de código da escola:

- Proibido usar `for`, `do while`, `switch`, `case` ou `goto`
- Máximo de 25 linhas por função e 5 funções por arquivo
- Máximo de 5 variáveis por função
- Proibido declarar e atribuir na mesma linha (exceto `static`)

Ferramentas:
- [Norminette](https://github.com/42School/norminette) — verifica o código automaticamente
- [42 Header](https://github.com/42Paris/42header) — cabeçalho padrão para Vim

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