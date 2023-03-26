#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i < 1000; i++)
	{
		if (i / 100 >= (i / 10) % 10 || i / 100 >= i % 10 || (i / 10) % 10 >= i % 10)
			continue;

		for (j = i + 1; j < 1000; j++)
		{
			if (j / 100 >= (j / 10) % 10 || j / 100 >= j % 10 || (j / 10) % 10 >= j % 10)
				continue;

			for (k = j + 1; k < 1000; k++)
			{
				if (k / 100 >= (k / 10) % 10 || k / 100 >= k % 10 || (k / 10) % 10 >= k % 10)
					continue;

				putchar(i / 100 + '0');
				putchar((i / 10) % 10 + '0');
				putchar(i % 10 + '0');putchar(',');
				putchar(' ');
				putchar(j / 100 + '0');
				putchar((j / 10) % 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
				putchar(k / 100 + '0');
				putchar((k / 10) % 10 + '0');
				putchar(k % 10 + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
