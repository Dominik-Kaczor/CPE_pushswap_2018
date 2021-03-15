/*
** EPITECH PROJECT, 2018
** tools_main
** File description:
** tools
*/

#include "include/my.h"
#include "include/push_swap.h"

void *ajoute(Liste *first_liste, int valeur)
{
    box *nvbox = malloc(sizeof(nvbox));
    nvbox->val = valeur;
    nvbox->nxt = first_liste->first;
    first_liste->first = nvbox;
}

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    box *element = malloc(sizeof(*element));

    element->nxt = NULL;
    liste->first = element;
}

void sup(Liste *liste)
{
    if (liste->first != NULL) {
        box *asup = liste->first;
        liste->first = liste->first->nxt;
        free(asup);
    }
}
