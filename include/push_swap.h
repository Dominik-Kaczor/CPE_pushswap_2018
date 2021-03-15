/*
** EPITECH PROJECT, 2018
** push_swap.h
** File description:
** structure
*/

#ifndef NAME_H_
#define NAME_H_

typedef struct box box;
struct box
{
    int val;
    box *nxt;
};

typedef struct Liste Liste;
struct Liste
{
    box *first;
};
    
#endif /* NAME_H_ */
    
