#!/bin/sh
# https://apc.u-paris.fr/~revenu/memolinux/node103.html

cc -c -Wall -Werror -Wextra *.c

ar r libft.a *.o

rm -rf *.o
