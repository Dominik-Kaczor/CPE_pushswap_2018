/*
** EPITECH PROJECT, 2018
** all tools s
** File description:
** tools s
*/

#include "include/my.h"
#include "include/push_swap.h"

void sa(Liste *liste)
{
    int stok = liste->first->val;

    liste->first->val = liste->first->nxt->val;
    liste->first->nxt->val = stok;
    write(1, "sa", 2);
}

void sb(Liste *liste)
{
    int stok = liste->first->val;

    liste->first->val = liste->first->nxt->val;
    liste->first->nxt->val = stok;
    write(1, "sb", 2);
}

void sc(Liste *l_a, Liste *l_b)
{
    int stok = l_a->first->val;
    int stok_b = l_b->first->val;

    l_a->first->val = l_a->first->nxt->val;
    l_a->first->nxt->val = stok;
    l_b->first->val = l_b->first->nxt->val;
    l_b->first->nxt->val = stok_b;
    write(1, "sc", 2);
}

void pa(Liste *l_a, Liste *l_b)
{
    int stok = l_b->first->val;

    sup(l_b);
    ajoute(l_a, stok);
    write(1, "pa", 2);
}

void pb(Liste *l_a, Liste *l_b)
{
    int stok = l_a->first->val;

    sup(l_a);
    ajoute(l_b, stok);
    write(1, "pb", 2);
}
