#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculat
*
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
        unsigned int i, sum = 0;
        va_start(ap, n);
        for (i = 0; i < n; i++)
	{
		if(n == 0)
		{
			sum = 0;
		}
		else
		{
			sum += va_arg(ap, int);
		}
	}
        va_end(ap);
        return (sum);
}
