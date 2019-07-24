
<p>
<img width="260" height="170" src="https://davidjohncoleman.com/wp-djc/wp-content/uploads/2017/06/HBTN-Borderless-CMYK-Logo-Vertical-Color-Black@1200ppi-300x236.png" align="right" >
</p>

# 0x0F - function_pointers

_Exercise to undertand pointers to functions in C, all this code was based in this documentation_ [Pointers](https://boredzo.org/pointers/#function_pointers)


## Info
#### Function pointers

It's possible to take the address of a function, too. And, similarly to arrays, functions decay to pointers when their names are used. So if you wanted the address of, say, strcpy, you could say either strcpy or &strcpy. (&strcpy[0] won't work for obvious reasons.)

When you call a function, you use an operator called the function call operator. The function call operator takes a function pointer on its left side.

In this example, we pass dst and src as the arguments on the interior, and strcpy as the function (that is, the function pointer) to be called:

```
enum { str_length = 18 };
char src[str_length] = "This is a string.", dst[str_length];

strcpy(dst, src); The function call operator in action (notice the function pointer on the left side).
```
There's a special syntax for declaring variables whose type is a function pointer.

```
char *strcpy(char *dst, const char *src); An ordinary function declaration, for reference
char *(*strcpy_ptr)(char *dst, const char *src); Pointer to strcpy-like function

strcpy_ptr =  strcpy;
strcpy_ptr = &strcpy; This works too
strcpy_ptr = &strcpy[0]; But not this
```
We can have an array of function-pointers:

```
char *(*strcpies[3])(char *, const char *) = { strcpy, strcpy, strcpy };
char *(*strcpies[])(char *, const char *) = { strcpy, strcpy, strcpy }; Array size is optional, same as ever

strcpies[0](dst, src);
```

#### Returning values

A function pointer can even be the return value of a function.

```
char *ptr;
char (*ptr);
char *strcpy(char *dst, const char *src);
```

First, declaring a pointer variable, This declaration tells us the pointer type (char), pointer level (*), and variable name (ptr). And the latter two can go into parentheses.

What happens if we replace the variable name in the first declaration with a name followed by a set of parameters? **A function declaration**.

But we also removed the * indicating pointer level — remember that the * in this function declaration is part of the return type of the function. So if we add the pointer-level asterisk back (using the parentheses):

```
char *(*strcpy_ptr)(char *dst, const char *src);

char *(*get_strcpy_ptr(void))(char *dst, const char *src);
```

Remember that the type of a pointer to a function taking no arguments and returning int is `int (*)(void). So the type returned by this function is char *(*)(char *, const char *)` (with, again, the inner * indicating a pointer, and the outer * being part of the return type of the pointed-to function). You may remember that that is also the type of strcpy_ptr.

```
strcpy_ptr = get_strcpy_ptr();

typedef char *(*strcpy_funcptr)(char *, const char *);

strcpy_funcptr strcpy_ptr = strcpy;
strcpy_funcptr get_strcpy_ptr(void);
```
So this function, which is called with no parameters, returns a pointer to a strcpy-like function, because function pointer syntax is so mind-bending, most developers use typedefs to abstract them

## Tasks

| File               | Description                              |
| ------------------ | ---------------------------------------- |
| 0-print_name.c     | This is a function that prints a name, given two parameters: a  string `name` and a function of how you would like the name to be printed, ex. all uppercase, as is, `f`. |
| 1-array_iterator.c | A function that executes a function given as a parameter on each element of an array. This function takes three arguements, the `array` , the`size` of the array, and the action of what you want to do to the array, `action`. |
| 2-int_index.c      | A function that searches for an integer. The function accepts three arguments: the `array` you are searching in, the `size` of the array, and `cmp`, the pointer to the function that is used for the value comparision. The function will return the first element for which `cmp` does not return `0`. If no elements are matched, then the function will return `-1`. If size is less than of equal to 0, the function will also return `-1`. |
|3-op_functions.c | build a simple calculator that can caclulate using addition, subtraction, multiplication, dividision, and modulo. All results of the operations are assumed to fit in an `int` size. |
| 100-main_opcodes.c | A program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function. The output format follow: the opcodes are printed in lowercase hexadecimal, each opcode is two char long, and listing ends with a new line.  The program takes in one argument, the number of bytes you want to print out, `size`. If `size` is negative, `Error` is printed and exit with a status 2. If the number of arguements is not exactly 1, then the program prints an `Error` messag and exit with a status of 1. |

## Social

**Follow me in [@JuanSGalvisH](https://twitter.com/JuanSGalvisH) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/JuanSGalvisH)**
