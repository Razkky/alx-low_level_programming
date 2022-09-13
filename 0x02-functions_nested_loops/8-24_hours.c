#include "main.h"
/**
 * jack_bauer - Print time in a day
 *
 */

void jack_bauer(void)
{
	int hoursTens, hoursOnes, minutesTens, minutesOnes;

	hoursTens = 0;
	while (hoursTens <= 2)
	{
		hoursOnes = 0;
		while (hoursOnes <= 4)
		{
			minutesTens = 0;
			while (minutesTens <= 5)
			{
				minutesOnes = 0;
				while (minutesOnes <= 9)
				{
					_putchar(hoursTens + '0');
					_putchar(hoursOnes + '0');
					_putchar(':');
					_putchar(minutesTens + '0');
					_putchar(minutesOnes + '0');
					_putchar('\n');
					minutesOnes++;
				}
				minutesTens++;
			}
			hoursOnes++;
		}
		hoursTens++;
	}
}
