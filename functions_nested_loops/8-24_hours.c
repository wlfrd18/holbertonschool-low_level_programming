#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints every time of the day
*
* Return: 0 if succes
*/
void jack_bauer(void)
{
	int hour, minute, hour1, hour2, minute1, minute2;

	for (hour = 0; hour < 24; hour++)
	{
		hour1 = hour / 10;
		hour2 = hour % 10;
		for (minute = 0; minute <= 59; minute++)
		{
			minute1 = minute / 10;
			minute2 = minute % 10;
			_putchar(hour1 + '0');
			_putchar(hour2 + '0');
			_putchar(':');
			_putchar(minute1 + '0');
			_putchar(minute2 + '0');
			_putchar('\n');
		}
	}
}
