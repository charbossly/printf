#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print text
 * @format: the text
 *
 * Return: the number of characters printed
 */                                                                                                                  
int _printf(const char *format, ...)
{
        va_list list;
        int i;

        va_start(list, format);

        i = 0;
        while(format[i]  )
        {
		 if (format[i] == '%')
                {
                        if(format[i+1] == 'c')
                        {
<<<<<<< HEAD
                                write(1, va_arg(list, int *), 1);
                                i += 1;
=======
				i +=1;
                                write(1, va_arg(list, int *),1);
>>>>>>> origin/main
                        }
                }
                else
                {
                        write(1, &format[i], 1);
                        i++;
                }
	}
        va_end(list);
        return (0);
}
