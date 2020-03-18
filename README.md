<p align="center">
<img src="https://www.davidjohncoleman.com/wp-content/uploads/2017/06/HBTN-Borderless-CMYK-Logo-Vertical-Color-Black@1200ppi-300x236.png">
</p>

<h1 align="center"> _printf project </h1>

### Description
In _printf project we code from zero our own custom printf function. Native printf function allows you to print with certain formats. We handle most basic format so you can print chars, strings, positive and negative numbers, hex, octa and binary numbers among other formats.
You can see man 3 of printf to understand how printf works.

### Usage
Compile

	gcc -Wall -Werror -Wextra -pedantic *.c -o executable
Prototype

	int _printf(const char *format, ...)

Return

If everything is successful, the function returns the num of chars printed.

Format conversion
| Format      | Description |
| ----------- | ----------- |
| c  | Print char values |
| s  | Print strings |
| d, i  | Print numbers [positive and negative]|
| b  | Print nums converted to binary |
| u  | Print nums as unsigned int |
| o  | Print nums converted to octal |
| x  | Print nums converted to hexa [uppercase]|
| X  | Print nums converted to hexa [uppercase]|
| %% | Print % character |
| p | Print memory adress [pointers] |
| r | Print string in reverse |
| S | Print string and non-printable chars [\x + ASCII value in hexa] |
| R | Print in rot13 |


Examples
1. Print char values
- Input `_printf("%c", 'x')`
- Output: `x`
- Input `_printf("%c", 97)`
- Output: `a`
2. Print strings
- Input `_printf("Hello%s\n", " Holberton!")`
- Output: `Hello Holberton!`
3. Print numbers
- Input `_printf("%d", 1024)`
- Output: `1024`
- Input `_printf("%i", -2048)`
- Output: `-2048`
4. Print converted to binary
- Input `_printf("%b\n", 15)`
- Output: `1111`
5. Print as unsigned int
- Input `_printf("%u\n", 15)`
- Output: `15`
- Input `_printf("%u\n", -15)`
- Output: `4294967281`
6. Print converted to octal
- Input `_printf("%o\n", 15)`
- Output: `17`
7. Print converted to hexa (lower and uppercase)
- Input `_printf("%x\n", 30)`
- Output: `1e`
- Input `_printf("%X\n", 30)`
- Output: `1E`
8. Print %
- Input `_printf("%%\n")`
- Output: `%`
- Input `_printf("%%-%%\n")`
- Output: `%-%`
9. Print memory adress [pointers]
- Input `_printf("%p\n", ptr)`
- Output: `0x7ffe637541f0`
10. Print string in reverse
- Input `_printf("Holberton - %r\n", "Holberton")`
- Output: `Holberton - notrebloH`
11.  Print string and non-printable chars
- Input `_printf("%S\n", "Holberton\nSchool")`
- Output: `Holberton\x0ASchool`
12.  Print in rot13
- Input `_printf("%R\n", "Holberton")`
- Output: `Ubyoregba`


### Project files
- Alert: Almost all functions, modify the buffer and returns it. **(char \*)**

| File        | Description |
| ----------- | ----------- |
|_itoa.c      | Tools functions:<br>**rev_string:** reverse a string passed as argument<br>**string_toupper**: convert to uppercase string passed as argument<br>**_calloc**: allocate memory and fills it with zeros<br>**_itoa**: convert num to base and return as string (unsigned int)<br>**adress**: convert num to base and return as string (long int)|
| _printf.c   | Core of the project:<br>**_printf**:<br>1. Start the variadic list<br>2. Retrieves dictonary and allocate buffer<br>3. Iterates string argument and check for %, if % found then check if the next char match with valid format, in that case call the respective function of these format. If after % there is other char of non-valid format saves in buffer %. If % and the next char is null, returns -1. If % not found, saves in buffer each character<br>4. When finish loop for string argument, prints all in buffer **[print_buff]**<br>5. Free all memory allocated|
| aux_funs.c  | Firtst group advanced functions:<br>**print_b**: add digits in base 2 to buffer<br>**print_u**: add unsigned integers to buffer<br>**print_o**: add digits in octal base  to buffer<br>**print_x**: add digits in hexadecimal base to buffer<br>**print_X**: add digits in hexadecimal uppercase base to buffer|
| buff_funs.c | Print all chars saved in buffer:<br>**print_buff**: print buffer with null at the end and free buffer memory |
| holberton.h | Header file:<br>**struct funs - filter**: Used for dictonary<br>**Include all prototypes**|
| man_3_printf| Man page of _printf function|
| print_funs.c| Basic functions:<br>**hand**: Dictonary. Creates array of filter's for all valid formats<br>**print_c**: add char to buffer<br>**print_str**: add string to buffer<br>**print_d**: print digits base 10<br>**pr**: add percentage to buffer|
| printf_advance.c | Second group advanced functions:<br>**print_p**: add pointers - adress to buffer<br>**print_r**: add string in reverse to buffer<br>**print_rot13** add string in rot13 to buffer<br>**print_S**: add string and non-printable chars [\x + ASCII code]|

#### Authors
David Gonzalez - [@davidgonzalezfx](https://github.com/davidgonzalezfx)<br>
Christian Bedoya - [@chrisdav1022](https://github.com/chrisdav1022)<br>
Santiago Mendieta - [@stostat](https://github.com/stostat)<br>
