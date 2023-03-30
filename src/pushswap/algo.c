/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "../../include/push_swap.h"

void insert_all_to_la(list **l_a, list **l_b, list *curr_b)
{
    if (curr_b->next == NULL) {
            move_to_l_a(l_a, l_b);
            curr_b = *l_b;
    } else {
        for (; curr_b != NULL; curr_b = curr_b->next) {
            move_to_l_a(l_a, l_b);
            curr_b = *l_b;
        }
    }
    move_to_l_a(l_a, l_b);
    curr_b = *l_b;
}

void just_two(list **l_a)
{
    list *curr_a = *l_a;
    if (curr_a->value <= curr_a->next->value) {
        write(1, "\n", 1);
        return;
    } else {
        swap(l_a);
        write(1, "sa\n", 3);
    }
}

bool good_order(list **root)
{
    list *curr = *root;
    if (curr->next != NULL)
        curr = curr->next;
    for (; curr != NULL; curr = curr->next) {
        if (curr->value < curr->previous->value)
            return false;
    }
    write(1, "\n", 1);
    return true;
}

void algo(list **l_a, list **l_b, int argc)
{
    list *curr_a = *l_a;
    list *curr_b = *l_b;
    int min;
    if (argc == 3)
        return just_two(l_a);
    if (good_order(l_a))
        return;
    while (curr_a->next != NULL) {
        min = get_min(l_a);
        while (curr_a->value != min) {
            first_to_last(l_a);
            curr_a = *l_a;
        }
        move_to_l_b(l_a, l_b);
        curr_a = *l_a;
        curr_b = *l_b;
    }
    insert_all_to_la(l_a, l_b, curr_b);
    swap(l_b);
    write(1, "sb\n", 3);
}
