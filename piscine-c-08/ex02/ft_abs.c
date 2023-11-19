#include "ft_abs.h"
#include <stdio.h>

int	main(int argc, char const *argv[])
{
    (void) argc;
    (void) argv;
	int	nb;
	int	abs;

	nb = -9;
	abs = ABS(nb);
	printf("nb: %d\nabs nb: %d\n", nb, abs);
	return (0);
}
