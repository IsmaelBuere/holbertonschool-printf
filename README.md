<div aling="center">
<h1>Printf Project</h1>
</div>

## Description

in this project we are looking to create a function based on the printf from the <stdio.h> library that fulfills the same functions and requirements as the original one

## Compilation

```
- Clone the repo with: git clone [repo link]
- Compile all the files .c with: gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
## Files and functions

* **_printf.c:**
	* "int _printf(const char *format, ...)" - This function produces output according to a format.
* **print_char.c**
	* "void print_char(va_list ap, unsigned int *num_char)" - This function prints a char.
* **print_int.c**
	* "void print_int(va_list ap, unsigned int *num_char)" - This function prints an integer number.
* **print_string.c**
	* "void print_string(va_list ap, unsigned int *num_char)" - This function prints a string.
* **rev_array.c**
	* "void reverse_array(char *a, int n)" - This function reverses the content of an array.
* **main.h**: header file


## Flowchart
<p>
<img width="1000" height="1400" src="https://i.imgur.com/w2gLYuM.jpeg">
</p>

## Completed projects
| Task # | Type | Short description |
| ---: | --- | --- |
|0 | **Mandatory**     | Write a function that produces output according to a format. |
|1 | **Mandatory**     | Handle the following conversion specifiers: `d` `i` |
|2 | **Mandatory**     | Create a man page for your function.
|3 | *Advanced*        | not yet completed |
|4 | *Advanced*        | not yet completed |
|5 | *Advanced*        | not yet completed |
|6 | *Advanced*        | not yet completed |

## Usage

You can use the function like this

```
#include "main.h"

int main()
{
        _printf("something to print")
        return;
}
```

## Parameters

| Function                        | conversion specifier                | Description                               |
| :------------------             | :------------------                 | :---------------------------------------- |
| `print_char`                    | `c`                                 | **print_char**.the function is used to display the character        |
| `print_string`                  | `s`                                 | **print_string**.the function is used to display the string        |
| `_print`                        | `d` `i`                             | **print_int**.The int argument is converted to signed decimal notation. |

## Authors

- Ismael Buere <a href="https://github.com/IsmaelBuere" rel="nofollow"><img aling="center" alt="github" src="https://1000logos.net/wp-content/uploads/2021/05/GitHub-logo.png" height="24" /></a>
- Alberto Riffaud <a href="https://github.com/alriffaud" rel="nofollow"><img aling="center" alt="github" src="https://1000logos.net/wp-content/uploads/2021/05/GitHub-logo.png" height="24" /></a>
