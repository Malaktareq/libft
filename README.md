# 📚 libft

A custom C library re-implementing essential parts of the C standard library + extra utility helpers.  
Built as a static library **`libft.a`** for use across 42 projects.

---

## 🔍 Table of Contents

- [About](#about)
- [Contents (Functions)](#contents-functions)
- [Requirements](#requirements)
- [Build](#build)
- [Usage](#usage)
- [Project Structure (example)](#project-structure-example)
- [What I Learned](#what-i-learned)

---

## 🧠 About

`libft` is a foundation library implemented in C.  
It includes:
- Rewrites of common **libc** functions
- **Additional** string/memory helpers
- (Optional bonus) a **singly linked list** API

The goal is clean, norm-compliant code with robust memory handling and consistent behavior.

---

## 🧾 Contents (Functions)

### 1) Libc Re-implementations
`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`,  
`strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`,  
`toupper`, `tolower`, `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`, `strnstr`,  
`atoi`, `calloc`, `strdup`.

### 2) Additional Functions
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,  
`ft_strmapi`, `ft_striteri`,  
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3) Bonus (Linked List) — *if implemented*
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,  
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## ⚙️ Requirements

- **C compiler:** GCC or Clang  
- **Make** utility  
- **POSIX** system (Linux / macOS)

---

## 🛠 Build

```bash
# Clone the repo
git clone https://github.com/Malaktareq/libft.git
cd libft

# Build the static library
make

# (Optional) build bonus list functions
make bonus

# Clean objects / rebuild
make clean
make fclean
make re
```
This produces libft.a in the repo directory.

---

## 🚀 Usage
Link libft.a with your program:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s = "  Hello, libft!  ";
    char *trimmed = ft_strtrim(s, " ");
    if (!trimmed) return 1;

    ft_putendl_fd(trimmed, 1);   // prints: Hello, libft!
    free(trimmed);
    return 0;
}
```
Compile and link:

```bash
cc main.c libft.a -I. -o demo
./demo
```
Ensure your include path (-I.) points to where libft.h is.

---

## 📁 Project Structure (example)
Adjust to match your repository layout.
```bash
libft/
├── Makefile
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_tolower.c
├── ft_toupper.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
# (Optional bonus files)
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
```
---

## 🧩 What I Learned
- Recreating core string/memory primitives safely
- Designing consistent APIs and handling edge cases
- Writing norm-compliant C with clear separation of concerns
- Defensive programming for null pointers, overlaps (memmove), and bounds
- Managing dynamic memory ownership and lifetime
