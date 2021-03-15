/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** the game sort l_a
*/

#include "include/my.h"
#include "include/push_swap.h"

int check_big(Liste*l_a)
{
    int min = l_a->first->val;
    box *tmp = l_a->first;

    while(tmp != NULL) {
        if(tmp->val < min)
            min = tmp->val;
        tmp = tmp->nxt;
    }
    return (min);
}

void bubble_sort(Liste *l_a, Liste *l_b)
{
    int min = 0;
    box *tmp = l_a->first;

    while (l_a->first != NULL){
        min = check_big(l_a);
        while (l_a->first->val != min)
            ra(l_a);
        pb(l_a, l_b);
        write (1, " ", 1);
    }
    while (l_b->first != NULL) {
        pa(l_a, l_b);
        if (l_b->first != NULL)
            write (1, " ", 1);
    }
    write(1, "\n", 1);
}

int check_liste(Liste *l_a)
{
    int nb = l_a->first->val;
    box *tmp = l_a->first;

    while(tmp != NULL) {
        if(tmp->val >= nb)
            nb = tmp->val;
        else
            return (0);
        tmp = tmp->nxt;
    }
    return (1);
}

void heart_swap(Liste *l_a, int ac, char **av)
{
    Liste *l_b = initialisation();

    sup(l_a);
    sup(l_b);
    for (int j = 1; j != ac; j++)
        ajoute(l_a, my_getnbr(av[ac - j]));
    if(check_liste(l_a) == 1)
        write(1, "\n", 1);
    else
        bubble_sort(l_a, l_b);
}

int main(int ac, char **av)
{
    Liste *l_a = initialisation();

    if (ac == 1 ) {
        write(2, "invalide elements\n", 18);
        return (84);
    } else if (ac >= 2000)
        return (0);
    for (int a = 1; a != ac; a++) {
        for (int b = 0; av[a][b] != '\0'; b++) {
            if (av[a][b] == '-') {
            } else if (av[a][b] < 48 || av[a][b] > 57) {
                write(2, "invalide characters\n",20);
                return (84);
            }
        }
    }
    heart_swap(l_a, ac, av);
    return (0);
}
