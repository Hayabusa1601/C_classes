#include <stdio.h>

int count_bits(unsigned x)
{
    int count = 0;
    while (x) {
        if (x & 1U) count++;
        x >>= 1;
    }
    return (count);
}


int int_bits(void)
{
    return (count_bits(~0U));
}


void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned shiftl(unsigned x, int n)
{
    return ((n >= int_bits()) ? 0 : (x << n));
}

unsigned set(unsigned x, int pos)
{
    return (x | shiftl(1U, pos - 1));
}


unsigned reset(unsigned x, int pos)
{
    return (x & ~shiftl(1U, pos - 1));
}

unsigned inverse(unsigned x, int pos)
{
    return (x ^ shiftl(1U, pos - 1));
}

int main(void)
{
    unsigned nx, pos;
    
   
    printf("非負の整数x："); scanf("%u", &nx);
    printf("操作するビット位置pos："); scanf("%u", &pos);
    
    printf("\nx               ="); print_bits(nx);
    printf("\n指定した位置を1にした値  ="); print_bits(set(nx, pos));
    printf("\n指定した位置を０にした値 ="); print_bits(reset(nx, pos));
    printf("\n指定した位置を反転させた値="); print_bits(inverse(nx, pos));
    putchar('\n');
    
    return (0);
}
