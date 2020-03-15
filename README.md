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
Format conversion
| Format      | Description |
| ----------- | ----------- |
| c  | Print char values |
| s  | Print strings |
| d, i  | Print numbers |
| b  | Print nums converted to binary |
| u  | Print nums as unsigned int |
| o  | Print nums converted to octal |
| x  | Print nums converted to hexa |
| %% | Print % character |
Examples


### Project files

#### Authors
[@davidgonzalezfx](https://github.com/davidgonzalezfx)
[@chrisdav1022](https://github.com/chrisdav1022)
[@stostat](https://github.com/stostat)
