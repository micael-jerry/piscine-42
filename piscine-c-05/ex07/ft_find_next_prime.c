int find_divider(int nb, int i)
{
    if (nb < 2)
    {
        return (0);
    }
    else if (nb % i == 0)
    {
        return (i);
    }
    else if ((i + 1) < nb)
    {
        return find_divider(nb, i + 1);
    }
    return (0);
}

int ft_is_prime(int nb)
{
    int res = find_divider(nb, 2);
    if (res == 0)
    {
        return (1);
    }
    return (0);
}

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    while (1)
    {
        if (ft_is_prime(i))
        {
            return (i);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int nb = 90;
    int res = ft_find_next_prime(nb);
    printf("%d", res);
    return 0;
}