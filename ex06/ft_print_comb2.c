#include <unistd.h>

void	print_char2(char c)
{
    int z;
    z = '0';
    if (c < 10)
    {
        write(1, &z , 1);
        write(1, &c, 1);
    }
    else
    {
	    write(1, &c, 1);
    }
}

void	print_comb2(int ab, int cd)
{

	char	char1;
	char	char2;
	char	char3;
	char	char4;

	char1 = '0' + (ab / 10);
	char2 = '0' + (ab % 10);
	char3 = '0' + (cd / 10);
	char4 = '0' + (cd % 10);

	write(1, &char1, 1);
	write(1, &char2, 1);
	write(1, " ", 1);   
	write(1, &char3, 1);
	write(1, &char4, 1);
	
	if (ab != 98)
		write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int ab;
    int cd;

    ab = 0;
    cd = 1;


    while (ab <= 98)
    {
        cd = ab + 1;
        while (cd <= 99)
        {
            print_comb2(ab, cd);
            cd++;
        }
        ab++;
    }
}



int main(void)
{
    ft_print_comb2();
    return (0);
}

