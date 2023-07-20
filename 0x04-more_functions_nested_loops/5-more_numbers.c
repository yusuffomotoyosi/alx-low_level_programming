#include "main.h"
/**
 * print_most_numbers - Print numbers 0 to 9, excluding 2 and 4.
 * Description: Can only use _putchar twice.
 */
void more_numbers(void)
{
  int c, i;

  c = 0;
  while (c < 10)
    {
      i = 0;
      while (i < 15)
	{
	  if (i > 9)
	    _putchar(i / 10 + '0');

	  _putchar(i % 10 + '0');
	  i++;
	}
      c++;
      _putchar('\n');
    }
}

