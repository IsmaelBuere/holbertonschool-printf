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
* **print_bin.c:**
	* "void print_bin(va_list ap, unsigned int *num_char)" - This function prints an unsigned integer number converted to binary
* **print_hex.c:**
	* "void print_hex(va_list ap, unsigned int *num_char)" - This function prints an unsigned integer number converted to hexadecimal
* **print_oct.c:**
	* "void print_oct(va_list ap, unsigned int *num_char)" - This function prints an unsigned integer number converted to octal
* **print_uint.c:**
	* "void print_uint(va_list ap, unsigned int *num_char)" - This function prints an unsigned integer number
* **print_hex_upper.c:**
	* "void print_hex_upper(va_list ap, unsigned int *num_char)" - This function prints an unsigned integer number converted to hexadecimal using uppercase.
* **non_print_char.c:**
	* "void non_print_char(va_list ap, unsigned int *num_char)" - Prints a string with a non printable characters.
* **print_addr.c:**
	* "void print_addr(va_list ap, unsigned int *num_char)" - This function prints the address of a pointer.


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
|3 | *Advanced*        | Handle the following custom conversion: b:the unsigned int argument is converted to binary |
|4 | *Advanced*        | Handle the following conversion in: u, o, x, X |
|5 | *Advanced*        | Use a local buffer of 1024 chars in order to call write as little as possible. |
|6 | *Advanced*        | Handle the following conversion specifier: p. |
|7 | *Advanced*        | Handle the following custom conversion: S: print the string |

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
| `_print`                        | `d` `i`                             | **print_int**.the int argument is converted to signed decimal notation. |
| `_print`                      | `%`                                 | **%**. No argument is converted |
| `print_oct`                      | `o`                                 | **print_oct**. the function is used to print a number in octal|
| `print_bin`                      | `b`                                 | **print_bin** the function is used to print a number in binary|
| `print_hex`                      | `x`                                 | **print_hex**. the function is used to print a number in lowercase hexadecimal base|
| `print_hex_upper`                      | `X`                                 | **print_hex_upper**. the function is used to print a number in a uppercase hexadecimal base|
| `print_uint`                      | `u`                                 | **print_uint**. the function is used to print a unsigned integer|
| `non_print_char`                      | `S` `\x`                                | **non_print_char**. handles non-printable characters: \x, followed by the ASCII code value in uppercase hexadecimal.|
| `print_addr`                      | `p`                                 | **print_addr**. the function is used to print the adrres of a pointer |

## Authors

- Ismael Buere <a href="https://github.com/IsmaelBuere" rel="nofollow"><img aling="center" alt="github" src="https://1000logos.net/wp-content/uploads/2021/05/GitHub-logo.png" height="24" /></a>
- Alberto Riffaud <a href="https://github.com/alriffaud" rel="nofollow"><img aling="center" alt="github" src="https://1000logos.net/wp-content/uploads/2021/05/GitHub-logo.png" height="24" /></a>
