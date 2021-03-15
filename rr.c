/*
** EPITECH PROJECT, 2018
** tools rr
** File description:
** tools
*/

#include "include/my.h"
#include "include/push_swap.h"

void rra(Liste *liste)
{
    box *tmp = liste->first;
    box *ptmp = liste->first;
    
    while (tmp->nxt != NULL) {
        ptmp = tmp;
        tmp = tmp->nxt;
    }
    ajoute(liste, tmp->val);
    ptmp->nxt = NULL;
    free(tmp);
    write(1, "rra", 3);
}

void rrb(Liste *liste)
{
    box *tmp = liste->first;
    box *ptmp = liste->first;

    while (tmp->nxt != NULL) {
        ptmp = tmp;
	tmp = tmp->nxt;
    }
    ajoute(liste, tmp->val);
    ptmp->nxt = NULL;
    free(tmp);
    write(1, "rrb", 3);
}

void rrr(Liste *l_a, Liste *l_b)
{
    box *tmp = l_a->first;
    box *ptmp = l_a->first;
    box *tmp_b = l_b->first;
    box *ptmp_b = l_b->first;

    while (tmp->nxt != NULL) {
        ptmp = tmp;
	tmp = tmp->nxt;
    }
    ajoute(l_a, tmp->val);
    ptmp->nxt = NULL;
    free(tmp);
    while (tmp_b->nxt != NULL) {
        ptmp_b = tmp_b;
        tmp_b = tmp_b->nxt;
    }
    ajoute(l_b, tmp_b->val);
    ptmp_b->nxt = NULL;
    free(tmp_b);
    write(1, "rrr", 3);
}

