/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/push_swap.h"

int my_put_nbr(int nb)
{
    int count = 0;

    if (nb == -2147483648) {
        my_put_nbr(-2);
        my_put_nbr(147483648);
        return 11;
    }
    if (nb < 0) {
        my_putchar('-');
        count++;
        nb = -nb;
    }
    if (nb >= 10) {
        count += my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
        count++;
    } else {
        my_putchar(nb + 48);
        count++;
    } return count;
}
