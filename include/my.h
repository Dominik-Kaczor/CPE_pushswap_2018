/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** prototyp and include
*/

#ifndef PROT_F_
#define PROT_F_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

int my_getnbr(char const *str);
void *ajoute(Liste *first_liste, int valeur);
Liste *initialisation();
void sup(Liste *liste);
void sa(Liste *liste);
void sb(Liste *liste);
void sc(Liste *l_a, Liste *l_b);
void pa(Liste *l_a, Liste *l_b);
void pb(Liste *l_a, Liste *l_b);
void ra(Liste *liste);
void rb(Liste *liste);
void rr(Liste *l_a, Liste *l_b);
void rra(Liste *liste);
void rrb(Liste *liste);
void rrr(Liste *l_a, Liste *l_b);

#endif /* PEOT_F_ */
