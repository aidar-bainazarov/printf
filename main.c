

# include "ft_printf.h"


int main(void)
{
    char c = 'c';
    char *s = "abc";
    int i = 5;
    int d = 6;
    unsigned int u = 5;
    char *p = "123"; 
    long unsigned int x = 12468466;
    long unsigned int X = 20147846;
    ft_printf("Hello world %c %s %% %i %d %u %p %x %X\n", c, s, i, d, u, p, x, X);
    return (0);
}