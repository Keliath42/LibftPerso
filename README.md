*This activity has been created as part of the 42 curriculum by [kpuythor].*

# Description

Libft is the first project of the 42 curriculum. Its objective is to recreate a collection of standard C library functions from scratch, while developing a deeper understanding of memory management, pointers, strings and data structures.

The project consists of building a personal static library, libft.a, containing implementations of commonly used C functions.

The library is divided into three main parts :

* **Part 1 - Libc functions :** Reimplementations of standard C functions for character manipulation, string operations, memory management and conversions.

**Character checks and conversions**

|Function    |Description                                                   |
|------------|--------------------------------------------------------------|
|`ft_isalpha`|Checks whether a character is alphabetic.                     |
|`ft_isdigit`|Checks whether a character is a digit.                        |
|`ft_isalnum`|Checks whether a character is alphanumeric.                   |
|`ft_isascii`|Checks whether a character belongs to the ASCII character set.|
|`ft_isprint`|Checks whether a character is printable.                      |
|`ft_toupper`|Converts a lowercase letter to uppercase.                     |
|`ft_tolower`|Converts an uppercase letter to lowercase.

**String manipulation**

|Function    |Description                                                       |
|------------|------------------------------------------------------------------|
|`ft_strlen` |Calculates the length of a string.                                |
|`ft_strchr` |Locates the first occurrence of a character in a string.          |
|`ft_strrchr`|Locates the last occurrence of a character in a string.           |
|`ft_strncmp`|Compares two strings up to a specified number of characters.      |
|`ft_strnstr`|Searches for a substring within a limited number of characters.   |
|`ft_strlcpy`|Copies a string into a buffer with size limitations.              |
|`ft_strlcat`|Concatenates strings while respecting the destination buffer size.|
|`ft_strdup` |Allocates memory and duplicates a string.                         |

**Memory management**

|Function    |Description                                                 |
|------------|------------------------------------------------------------|
|`ft_memset` |Fills a memory area with a specified byte.                  |
|`ft_bzero`  |Sets a memory area to zero.                                 |
|`ft_memcpy` |Copies bytes between non-overlapping memory areas.          |
|`ft_memmove`|Copies bytes between memory areas, safely handling overlaps.|
|`ft_memchr` |Searches for a byte within a memory area.                   |
|`ft_memcmp` |Compares two memory areas byte by byte.                     |
|`ft_calloc` |Allocates and initializes memory to zero.                   |

**Conversion**

|Function    |Description                                                 |
|------------|------------------------------------------------------------|
|`ft_atoi` |Converts a string into an integer.                  |

* **Part 2 - Additional functions :** Utility functions for string manipulation, memory allocation and file descriptor output.

|Function       |Description                                                               |
|---------------|--------------------------------------------------------------------------|
|`ft_substr`    |Extracts a substring from a given string.                                 |
|`ft_strjoin`   |Concatenates two strings into a newly allocated string.                   |
|`ft_strtrim`   |Removes specified characters from the beginning and end of a string.      |
|`ft_split`     |Splits a string into an array of strings using a delimiter.               |
|`ft_itoa`      |Converts an integer into a string.                                        |
|`ft_strmapi`   |Applies a function to each character of a string and creates a new string.|
|`ft_striteri`  |Applies a function to each character of a string in place.                |
|`ft_putchar_fd`|Writes a character to a specified file descriptor.                        |
|`ft_putstr_fd` |Writes a string to a specified file descriptor.                           |
|`ft_putendl_fd`|Writes a string followed by a newline to a file descriptor.               |
|`ft_putnbr_fd` |Writes an integer to a specified file descriptor.                         |

* **Part 3 - Linked lists :** Functions for creating , traversing, modifying and deleting singly linked lists.

|Function         |Description                                                      |
|-----------------|-----------------------------------------------------------------|
|`ft_lstnew`      |Creates a new list node.                                         |
|`ft_lstadd_front`|Adds a node at the beginning of a list.                          |
|`ft_lstsize`     |Counts the number of nodes in a list.                            |
|`ft_lstlast`     |Returns the last node of a list.                                 |
|`ft_lstadd_back` |Adds a node at the end of a list.                                |
|`ft_lstdelone`   |Deletes a single node and frees its content.                     |
|`ft_lstclear`    |Deletes and frees an entire list.                                |
|`ft_lstiter`     |Applies a function to the content of each node.                  |
|`ft_lstmap`      |Creates a new list by applying a function to each node’s content.|

# Instructions

**Compilation**

Once you cloned the repository on your PC, navigate to the project directory. You can then compile the library using :
```Bash
make
```
or

```Bash
make all
```
This generate the static library libft.a.

**Makefile rules**

* `make` or `make all` : Compiles the library (with -Wall -Werror -Wextra flags)
* `make clean` : Removes objects files.
* `make fclean` : Removes object files and the library.
* `make re` : Rebuilds the library from scratch.

**Usage**

Include the header file in your C program :

```C
#include "libft.h"
```

Compile your program with the library :

```Bash
cc main.c libft.a -o program
```

Run the executable :

```Bash
./program
```

# Resources

The following resources were used to understand C functions, memory management and the concepts required for this project :

* **42 Libft subject** - The subject of the project containing the project requirements, constraints and expected behaviour.
* **C manual pages (man)** - Reference documentations for standard C library functions.
* **https://devdocs.io/** - A site containing all man references that I found easier to understand than the traditional man.
* **https://www.ascii-code.com/** - Usefull ASCII table.
* **Various forums (StackOverflow, OpenClassroom, Reddit...)** - Searching for answers to questions like "What is the difference between memmove and memcpy ?" for exemple or an explanation on an error code.
* **https://www.stephane-robert.info/docs/developper/autres-outils/build/makefile/** - Very useful and clear tutorial about making Makefiles.
* **Tripouille's libftTester** - External testing tool used to verify function behavior and identify edge cases.
* **https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#emphasis** - Cheat sheet to help reminding about Markdown usage for the writing of this README.

**AI usage**

AI was used as a learning and debugging assistant throughout the project.

Its role was limited to explaining programming concepts, asking guiding questions and helping analyze errors or unexpected behaviors.

All functions were implemented and debugged manually, with an emphasis on understanding the underlying logic rather than receiving ready-made solutions.

AI was also used to help write this README.

