#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hoursTens, hoursOones, minutesTens, minutesOnes, hoursMax;

	hoursMax = 58;
	hoursTens = '0';
	while (hoursTens < '3')
	{
		if (hoursTens == '2')
		{
			hoursMax = '4';
		}
		hoursOnes = '0';
		while (hoursOnes < hoursMax)
		{
			minutesTens = '0';
			while (minutesTens < '6')
			{
				minutesOnes = '0';
				while (minutesOnes < 58)
				{
					_putchar(hourTens);
					_putchar(hoursOnes);
					_putchar(':');
					_putchar(minutesTens);
					_putchar(minutesOnes);
					_putchar('\n');
					minutesOnes++;
				}
				minutesOnes = '0';
				minutesTens++;
			}
			minutesTens = '0';
			hoursOnes++;
		}
		hoursOnes = '0';
		hoursTens++;
	}
}
