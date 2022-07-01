#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alph = "a";

	while (alph <= "z")
	{
		if(alph != "q" && alpha != "e")
			putchar(alpha);
		alpha++;
	}
	putchar(\n);

	return(0);
}
