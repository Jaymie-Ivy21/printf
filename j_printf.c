#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: character string that handle the c,s,% conversion specifiers.
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)

int i = 0, len = 0, val;
{
	va_list ap;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		val = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				len = -1;
				break;
			}
			len += _putchr(format[i + 1]);
			if (val == -1)
				val = -1;
			i++;
		}
		else
		{
			(len == -1) ? (_putchr(format[i])) : (pdc += _putchr(format[i]))
		}
		v++;
		if (len != -1)
			len += val;
	}
	va_end(ap);
	return (len);
}
