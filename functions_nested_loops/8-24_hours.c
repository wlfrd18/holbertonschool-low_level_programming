#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints every time of the day
*
* Return: 0 if succes
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 24; hour++)
		for (minute = 0; minute <= 59; minute++)
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':')
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n')
}
