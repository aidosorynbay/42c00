#include <unistd.h>
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    while(c < 10 && a< 10 && b < 10)
    {

        c++;
        if (c == 10)
        {
            b++;
            c = 0;
        }
        if (b == 10)
        {
            a++;
            b = 0;
            c = 0;
        }

        if(a != b && a != c && b != c)
        {
            printf("%d", a);
            printf("%d", b);
            printf("%d, ", c);
        }
    }
    return 0;

}