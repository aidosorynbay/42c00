#include <unistd.h>

void	print_char2(char c)
{
	write(1, &c, 1);
}

void	print_comb2(char a, char b, char c, char d)
{
	print_char2(a + '0');
	print_char2(b + '0');
    print_char2(' ');
	print_char2(c + '0');
    print_char2(d + '0');
	if (a == 9 && b == 8 && c == 9 && d == 9)
	{
		return ;
	}
	print_char2(',');
	print_char2(' ');
}

void    ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 0;
    b = 0;
    c = 0;
    d = 1;

    while (a < 10)
    {
        b = 0;
        while (b < 10)
        {
            c = 0;
                while (c < 10)
                {
                    d = 0;
                    while (d < 10)
                    {
                        print_comb2(a, b, c, d);
                        d++;
                    }
                    c++;
                }
            b++;
        }
        a++;
    }
}



int main(void)
{
    ft_print_comb2();
    return (0);
}

