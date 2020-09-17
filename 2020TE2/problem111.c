#include <stdio.h>

int count_bits(unsigned x)
{
    int co = 0;
    while (x) {
        if (x & 1U) co++;
        x >>= 1;
    }
    return co;
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
    unsigned x, pos;
    
   
    printf("非負の整数x："); scanf("%u", &x);
    printf("操作するビット位置pos："); scanf("%u", &pos);
    
    printf("\nx               ="); print_bits(x);
    printf("\n指定した位置を1にした値  ="); print_bits(set(x, pos));
    printf("\n指定した位置を０にした値 ="); print_bits(reset(x, pos));
    printf("\n指定した位置を反転させた値="); print_bits(inverse(x, pos));
    putchar('\n');
    
    return 0;
}
