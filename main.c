/*
** main.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 09:51:11 2016 MO david
** Last update Sat Oct 29 11:32:23 2016 MO david
*/
#include <stdio.h>
#include "my_struct.h"
#include <stdlib.h>
  
int		main(int argc, char **argv)
{
  t_list	*list;
  t_move	*move;
  /* t_list	*tmp; */
  int	p;
  /* int	i; */
  p = chifumi_parsing(argc, argv);
  /* i = p * 2 - 1; */
  if (p !=1)
    {
      printf("nb partie %d\n",p);
      list = 0;
      move = 0;
      list = mk_list(list, 1);
      move = mk_move(move, argv[2]);
      chifumi_aff(argv[2], argv[4]);
      chifumi_start(list, move, argv[2], p);
      chifumi_option(list, move);
    }
  return (0);    
}
