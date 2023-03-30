/*
** EPITECH PROJECT, 2022
** operation
** File description:
** operation
*/

#include "../../../include/push_swap.h"

bool check_mv_la(list **l_a, list **l_b, list *curr_a, list *curr_b)
{
    if (curr_b->next == NULL && curr_a == NULL) {
        curr_a = curr_b;
        *l_a = curr_a;
        curr_b = NULL;
        *l_b = curr_b; return true;
    }
    if (curr_b->next == NULL) {
        *l_b = NULL;
        curr_b->next = curr_a;
        curr_a->previous = curr_b;
        *l_a = curr_b; return true;
    }
    if (curr_a == NULL) {
        curr_b->next->previous = NULL;
        *l_b = curr_b->next;
        curr_b->next = NULL;
        *l_a = curr_b; return true;
    }
    return false;
}

bool check_mv_lb(list **l_a, list **l_b, list *curr_a, list *curr_b)
{
    if (curr_a->next == NULL && curr_b == NULL) {
        curr_b = curr_a;
        *l_b = curr_b;
        curr_a = NULL;
        *l_a = curr_a; return true;
    }
    if (curr_a->next == NULL) {
        *l_a = NULL;
        curr_a->next = curr_b;
        curr_b->previous = curr_a;
        *l_b = curr_a; return true;
    }
    if (curr_b == NULL) {
        curr_a->next->previous = NULL;
        *l_a = curr_a->next;
        curr_a->next = NULL;
        *l_b = curr_a; return true;
    }
    return false;
}
