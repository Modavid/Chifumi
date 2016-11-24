/*
** mk_struct.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 21:45:05 2016 MO david
** Last update Sat Oct 29 10:37:43 2016 MO david
*/

#include "my_struct.h"

t_list          *init_list2(t_list *list, int round)
{
  t_list        *node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    return (0);
  node->score = 0;
  node->score2 = 0;
  node->round = round;
  node->next = list;
  return (node);
}

t_list          *init_list(t_list *list, int round)
{
  t_list        *node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    return (0);
  node->score = list->score;
  node->score2 = list->score2;
  node->round = round;
  node->next = list;
  return (node);
}

t_move          *init_move(t_move *move,int id,char *name,int beat, int beat2)
{
  t_move        *node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    return (0);
  node->id = id;
  node->name = name;
  node->beat = beat;
  node->beat2 = beat2;
  node->next = move;
  return (node);
}

t_list	*mk_list(t_list *list,int round)
{
  list = init_list2(list, round);
  return(list);
}

t_move		*mk_move(t_move *move, char *argv)
{
  if (my_strcmp(argv,"5") == 0)
    {
      move = init_move(move, 1, "rock", 3, 5);
      move = init_move(move, 2, "paper", 1, 4);
      move = init_move(move, 3, "scissors", 2, 5);
      move = init_move(move, 4, "spock", 1, 3);
      move = init_move(move, 5, "lizard", 2, 4);
    }
  else if (my_strcmp(argv,"3") == 0)
    {
      move = init_move(move, 1, "rock", 3, 0);
      move = init_move(move, 2, "paper", 1, 0);
      move = init_move(move, 3, "scissors", 2, 0);
    }
  return (move);
}
