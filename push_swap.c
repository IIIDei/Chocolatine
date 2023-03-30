/*
** EPITECH PROJECT, 2022
** main
** File description:
** main push_swap
*/

#include "include/push_swap.h"

int main(int argc, char **argv)
{
    list *l_a = NULL;
    list *l_b = NULL;

    if (argc == 1)
        return 84;
    if (argc == 2) {
        write(1, "\n", 1);
        return 0;
    }
    if (!list_filling(&l_a, argc, argv))
        return 84;
    algo(&l_a, &l_b, argc);
    deallocate_all(&l_a, &l_b);
    return 0;
}
