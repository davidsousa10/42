_This project has been created as part of the 42 curriculum by dsousa-o_

In this project we recreate the `printf` function from scratch.

### Index
* [Description](#Description)
* [What do we use?](#what-do-we-use)
* [Instructions](#Instructions)
* [How do we use the library?](#how-do-we-use-the-library)
* [Algorithm and Data Structure](#algorithm-and-data-structure)
* [Resources](#resources)

---

### Description
ft_printf is a project from 42 where we recreate the behavior of `printf`.
In our ft_printf you can use the following conversions:

| Conversion | Description |
|-----------|-------------|
| **%c** | Prints a single character. |
| **%s** | Prints a string (as defined by default in C). |
| **%p** | Prints the given void * pointer in hexadecimal format. |
| **%d** | Prints a decimal number (base 10). |
| **%i** | Prints an integer in base 10. |
| **%u** | Prints an unsigned decimal number (base 10). |
| **%x** | Prints a hexadecimal number (base 16) in lowercase. |
| **%X** | Prints a hexadecimal number (base 16) in uppercase. |
| **%%** | Prints the percent symbol. |

---

### What do we use?
In our ft_printf we are allowed to use only the following external library functions:

| Function | Description |
|---------|-------------|
| malloc | Allocates a block of memory of the size specified as a parameter. |
| free | Deallocates a block of memory that was previously allocated. |
| write | Writes the specified number of bytes from the buffer to the selected file descriptor. |
| va_start | Enables access to the arguments of a variadic function. |
| va_arg | Accesses the next argument of the variadic function. |
| va_copy | Makes a copy of the variadic function arguments. |
| va_end | Ends the traversal of the variadic function arguments. |

---

### Instructions?

The goal is to create a library containing all our code so it can be reused in future projects, called: *libftprintf.a*

To create this library, follow these steps:

```bash
git clone repository
cd ft_printf
make
```
After checking the directory, you will find the library somewhere: libftprintf.a

### How do we use the library?

To use it, you must first have the library: libftprintf.a.  
Then you need to add it to the compiler, first the path to `libftprintf.a` and then the library name.

```bash
gcc files.c -L<path to libftprintf.a> -lftprintf
```

### Algorithm and Data Structure

The `ft_printf` implementation uses a linear, single-pass parsing algorithm that scans the format string from left to right and processes each conversion as it is found. When a `%` character is encountered, the following character is interpreted as a format specifier and dispatched to the corresponding printing function, which consumes exactly one argument from a `va_list`. No complex data structures are required: variadic arguments are handled using `va_list`, and simple strings are used as lookup tables for base conversions (e.g., hexadecimal).

# Resources

+ man pages
+ 42 subject