/*
** EPITECH PROJECT, 2022
** operation
** File description:
** operation
*/

#include "../../../include/push_swap.h"

void move_to_l_a(list **l_a, list **l_b)
{
    list *curr_a = *l_a;
    list *curr_b = *l_b;

    if (curr_b == NULL)
        return;
    write(1, "pa ", 3);
    if (check_mv_la(l_a, l_b, curr_a, curr_b))
        return;
    curr_b->next->previous = NULL;
    *l_b = curr_b->next;
    curr_b->next = curr_a;
    curr_a->previous = curr_b;
    *l_a = curr_b;
    write(1, "pa ", 3);
}

void move_to_l_b(list **l_a, list **l_b)
{
    list *curr_a = *l_a;
    list *curr_b = *l_b;

    if (curr_a == NULL)
        return;
    write(1, "pb ", 3);
    if (check_mv_lb(l_a, l_b, curr_a, curr_b))
        return;
    curr_a->next->previous = NULL;
    *l_a = curr_a->next;
    curr_a->next = curr_b;
    curr_b->previous = curr_a;
    *l_b = curr_a;
}
