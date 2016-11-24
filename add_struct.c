/*
** add_struct.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Sat Oct 29 04:03:40 2016 MO david
** Last update Sat Oct 29 10:10:46 2016 MO david
*/
#include "my_struct.h"

t_list          *add_coup(t_list *list, void *coup)
{
  list->coup = coup;
  return (list);
}

t_list          *add_coup2(t_list *list, void *coup2)
{
  list->coup2 = coup2;
  return (list);
}

t_list          *add_score(t_list *list)
{
  list->score = list->score + 1;
  return (list);
}

t_list          *add_score2(t_list *list)
{
  list->score2 = list->score2 + 1;
  return (list);
}

t_list		*add_round(t_list *list)
{
  list->round = list->round + 1;
  return(list);
}
