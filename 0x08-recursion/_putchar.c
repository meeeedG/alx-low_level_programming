#include <unistd.h>
int _putchar(c);
{
	return(write(1, &c, 1));
}
