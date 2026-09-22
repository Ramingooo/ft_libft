<h1 align="center">
  Libft — @1337 / 42 School
</h1>

<p align="center">
  <b>A custom C standard library re-implementing essential libc routines and standard utilities from scratch.</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C" />
  <img src="https://img.shields.io/badge/1337-Common%20Core-000000.svg" alt="1337" />
</p>

---

## 📖 About the Project

**Libft** is the very first project in the 42 / 1337 curriculum. The objective is to build a foundational static library (`libft.a`) in **C** containing standard library re-implementations and commonly used utility functions.

This library serves as the backbone for future 42 projects (such as *ft_printf*, *get_next_line*, and more).

---

## 🛠️ Implemented Functions

### Part 1: Standard Libc Functions

Re-implementations of standard C library functions (`<ctype.h>`, `<string.h>`, `<stdlib.h>`):

| Function | Description |
| :--- | :--- |
| [`ft_isalpha`](ft_isalpha.c) | Checks for an alphabetic character. |
| [`ft_isdigit`](ft_isdigit.c) | Checks for a digit (`0` through `9`). |
| [`ft_isalnum`](ft_isalnum.c) | Checks for an alphanumeric character. |
| [`ft_isascii`](ft_isascii.c) | Checks whether character fits into the ASCII character set. |
| [`ft_isprint`](ft_isprint.c) | Checks for any printable character including space. |
| [`ft_strlen`](ft_strlen.c) | Computes the length of a string. |
| [`ft_memset`](ft_memset.c) | Fills a byte string with a byte value. |
| [`ft_bzero`](ft_bzero.c) | Writes zeroes to a byte string. |
| [`ft_memcpy`](ft_memcpy.c) | Copies memory area. |
| [`ft_memmove`](ft_memmove.c) | Copies memory area safely even with overlapping buffers. |
| [`ft_strlcpy`](ft_strlcpy.c) | Size-bounded string copy. |
| [`ft_strlcat`](ft_strlcat.c) | Size-bounded string concatenation. |
| [`ft_toupper`](ft_toupper.c) | Converts a lower-case letter to the corresponding upper-case letter. |
| [`ft_tolower`](ft_tolower.c) | Converts an upper-case letter to the corresponding lower-case letter. |
| [`ft_strchr`](ft_strchr.c) | Locates the first occurrence of a character in a string. |
| [`ft_strrchr`](ft_strrchr.c) | Locates the last occurrence of a character in a string. |
| [`ft_strncmp`](ft_strncmp.c) | Compares up to `n` characters of two strings. |
| [`ft_memchr`](ft_memchr.c) | Scans memory for a specific character. |
| [`ft_memcmp`](ft_memcmp.c) | Compares two memory areas byte by byte. |
| [`ft_strnstr`](ft_strnstr.c) | Locates a substring in a string, bounded by length. |
| [`ft_atoi`](ft_atoi.c) | Converts the initial portion of a string to an integer. |
| [`ft_calloc`](ft_calloc.c) | Allocates memory and initializes all bytes to zero (overflow protected). |
| [`ft_strdup`](ft_strdup.c) | Allocates and duplicates a string. |

### Part 2: Additional Utility Functions

Practical functions that are either not included in the standard libc or exist in a different format:

| Function | Description |
| :--- | :--- |
| [`ft_substr`](ft_substr.c) | Allocates and returns a substring from a string. |
| [`ft_strjoin`](ft_strjoin.c) | Allocates and concatenates two strings into a new string. |
| [`ft_strtrim`](ft_strtrim.c) | Trims specified set of characters from the beginning and end of a string. |
| [`ft_split`](ft_split.c) | Splits a string into an array of strings using a delimiter character. |
| [`ft_itoa`](ft_itoa.c) | Converts an integer value into a null-terminated string (handles `INT_MIN`). |
| [`ft_strmapi`](ft_strmapi.c) | Applies a function to each character of a string to create a new string. |
| [`ft_striteri`](ft_striteri.c) | Applies a function to each character of a string (by reference). |
| [`ft_putchar_fd`](ft_putchar_fd.c) | Outputs a character to a given file descriptor. |
| [`ft_putstr_fd`](ft_putstr_fd.c) | Outputs a string to a given file descriptor. |
| [`ft_putendl_fd`](ft_putendl_fd.c) | Outputs a string followed by a newline to a given file descriptor. |
| [`ft_putnbr_fd`](ft_putnbr_fd.c) | Outputs an integer to a given file descriptor (iterative implementation). |

---

## 🚀 Getting Started

### Requirements
- **OS:** Linux / macOS
- **Compiler:** `gcc` or `clang`
- **Build tool:** `make`

### Compilation & Commands

Compile the library and generate the `libft.a` static archive:

```bash
make
```

Makefile rules:

| Command | Action |
| :--- | :--- |
| `make` / `make all` | Compiles source files and archives them into `libft.a`. |
| `make clean` | Removes compiled object files (`*.o`). |
| `make fclean` | Removes object files and the `libft.a` static library. |
| `make re` | Performs `fclean` followed by `make all`. |

---

## 💻 Usage

To use this library in another C project:

1. Clone and build the library:
   ```bash
   git clone https://github.com/your-username/libft.git
   cd libft
   make
   ```

2. Include the header in your C code:
   ```c
   #include "libft.h"

   int main(void)
   {
       ft_putstr_fd("Hello from Libft!\n", 1);
       return (0);
   }
   ```

3. Compile with the library archive:
   ```bash
   gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ./my_program
   ```
