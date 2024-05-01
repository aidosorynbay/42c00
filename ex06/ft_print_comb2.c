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

void	print_comb2(char ab, char cd)
{
	if (ab == cd)
    {

    }
    else
    {
        print_char2(ab + '0');
        print_char2(' ');
        print_char2(cd + '0');
        if (ab == 98 && cd == 99)
        {
            return ;
        }
        print_char2(',');
        print_char2(' ');
    }
}

void    ft_print_comb2(void)
{
    int ab;
    int cd;

    ab = 0;
    cd = 1;


    while (ab <= 98)
    {
        cd = 0;
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

