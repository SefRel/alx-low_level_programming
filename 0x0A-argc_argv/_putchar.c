#include <unistd.h>

/* _putchar : writes character c to stdout */

int _putchar(char c)
{
return (write1(1, &c, 1));
}
