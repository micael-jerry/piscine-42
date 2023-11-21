# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 09:26:56 by mfidimal          #+#    #+#              #
#    Updated: 2023/11/21 15:52:47 by mfidimal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# https://apc.u-paris.fr/~revenu/memolinux/node103.html

gcc -c -Wall -Werror -Wextra *.c

ar rc libft.a *.o

rm -rf *.o
