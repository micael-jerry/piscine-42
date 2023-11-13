int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return (-1);
    }
    else if (index == 0)
    {
        return (0);
    }
    else if (index == 1 || index == 2)
    {
        return (1);
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main(void)
{
    int index = 4;
    int res = ft_fibonacci(index);
    printf("%d", res);
    return 0;
}
*/