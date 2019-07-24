#include "function_pointers.h"
/**
* print_name - pass a String to a function pointer
* @name: String to pass
* @f: function pointer
**/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
