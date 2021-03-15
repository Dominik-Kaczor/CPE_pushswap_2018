/*
** EPITECH PROJECT, 2018
** all tools r
** File description:
** tools r
*/

#include "include/my.h"
#include "include/push_swap.h"

void ra(Liste *liste)
{
    box *tmp = liste->first;

    while (tmp->nxt != NULL)
        tmp = tmp->nxt;
    tmp->nxt = liste->first;
    liste->first = liste->first->nxt;
    tmp->nxt->nxt = NULL;
    write(1, "ra ", 3);
}

void rb(Liste *liste)
{
    box *tmp = liste->first;

    while (tmp->nxt != NULL)
        tmp = tmp->nxt;
    tmp->nxt = liste->first;
    liste->first = liste->first->nxt;
    tmp->nxt->nxt = NULL;
    write(1, "rb", 2);
}

void rr(Liste *l_a, Liste *l_b)
{
    box *tmp = l_a->first;
    box *tmp_b = l_b->first;

    while (tmp->nxt != NULL)
        tmp = tmp->nxt;
    tmp->nxt = l_a->first;
    l_a->first = l_a->first->nxt;
    tmp->nxt->nxt = NULL;
    while (tmp_b->nxt != NULL)
        tmp_b = tmp_b->nxt;
    tmp_b->nxt = l_b->first;
    l_b->first = l_b->first->nxt;
    tmp_b->nxt->nxt = NULL;
    write(1, "rr", 2);
}
