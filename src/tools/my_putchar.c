/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** print char
*/

#include "../../include/push_swap.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
