/*
** chifumi_start.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Sat Oct 29 11:06:07 2016 MO david
** Last update Sat Oct 29 11:21:42 2016 MO david
*/

#include "my_struct.h"

void	chifumi_start(t_list *list, t_move *move,char *argv, int p)
{
  int	i;
  int	round;
  
  round = 1;
  i = p * 2 - 1;
  while ((p != list->score) && (p != list->score2) && i != 0)
    {
      chifumi_aff2(list);
      chifumi_game(argv, list, move);
      round++;
      list = init_list(list, round);
      i--;
    }
}
