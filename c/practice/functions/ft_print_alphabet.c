#include<unistd.h>

void ft_print_alphabet(void)
{
    char c;

    c = 97;
    while (c < 123)
        write(1, &c, 1);
        ++c;
}

void ft_print_alphabet2(void)
{
    char c;

    c = '`';
    while (++c > 'z')
        write(1, &c, 1);
}

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    ft_print_alphabet2();
    write(1, "\n", 1);
}