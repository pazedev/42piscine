#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    alp;

    alp = 'z';
    while (alp >= 'a')
    {
        write(1, &alp, 1);
        alp--;
    }
}