_This project has been done as part of the curriculum of 42 by dsousa-o._

# Description

This project focuses on reimplementing a collection of standard C library functions along with additional helper utilities. The functions are compiled into a reusable library, and a Makefile is provided to handle the build process.

# Instructions

### Build the library

To build the library, run:
```
make
```
This command produces the static library `libft.a`.

Available Makefile rules:

```
make clean		# removes object files
make fclean		# removes object files and libft.a
make re			# recompiles the library
```

### Using the library 

Include the header file in your source code:
```
#include "libft.h"
```
Link the library when compiling your program:
```
gcc main.c libft.a
```

# Functions

### Part 1 - Libc functions

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup

### Part 2 - Additional functions

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Part 3 - Linked lists

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

# Resources

+ 42 subject
+ man information