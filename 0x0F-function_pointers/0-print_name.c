#include <stdio.h>

/**
 * print_name_as_is - print string
 *
 * @name: string to be outputed
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
	     printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - cover string to upper
 * and output
 *
 * @name: string to be outputed
 *
 * Return: void
 */

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * print_name - print name with funtion pointer
 *
 * @name: string to be outputed
 * @f: callback pointer function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * main - print name
 *
 * Return: Always return 0.
 */
int main(void)
{
	void (*fas_is)(char *) = print_name_as_is;
	void (*f_upper)(char *) = print_name_uppercase;

	print_name("Bob", fas_is);
	print_name("Bob Dylan", f_upper);
	printf("\n");
	return (0);
}
