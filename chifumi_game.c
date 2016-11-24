/*
** chifumi_game.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 13:37:59 2016 MO david
** Last update Sat Oct 29 10:18:42 2016 MO david
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_struct.h"

t_list	*chifumi_game3(int entree, int nb, t_list *list, t_move *move, char *argv)
{
  t_move	*tmp;
  
  nb = my_rand(3);
  tmp = move;
  while ((nb != tmp->id) && (tmp != NULL))
    tmp = tmp->next;
  my_putstr("--VS-- \n");
  my_putstr(tmp->name);
  if (nb == entree)
    {
      my_putstr("\nResultat Egalite -> Rejouez\n");
      chifumi_game(argv, list, move);
    }
  else if (tmp->beat == entree)
    {
      my_putstr("\nResultat Defaite !\n");
      add_coup2(list, tmp->name);
      add_score2(list);
      chifumi_aff_score(list->score,list->score2);
    }
  else
    {
      add_coup2(list, tmp->name);
      my_putstr("\nResultat Victoire\n");
      add_score(list);
      chifumi_aff_score(list->score,list->score2);
    }
  
  return (list);
}

void	chifumi_game5(int entree, int nb, t_list *list, t_move *move, char *argv)
{
  t_move	*tmp;

  nb = my_rand(5);
  tmp = move;
  while ((nb != tmp->id) && (tmp != NULL))
    tmp = tmp->next;
  my_putstr("--VS-- \n");
  my_putstr(tmp->name);
  if (nb == entree)
    {
      my_putstr("\nResultat Egalite -> Rejouez\n");
      chifumi_game(argv, list, move);
    }
  else if ((tmp->beat == entree || tmp->beat2 == entree))
    {
      my_putstr("\nResultat Defaite !\n");
      add_coup2(list, tmp->name);
      add_score2(list);
      chifumi_aff_score(list->score,list->score2);
    }
  else
    {
      add_coup2(list, tmp->name);
      my_putstr("\nResultat Victoire\n");
      add_score(list);
      chifumi_aff_score(list->score,list->score2);
    }
}

t_list		*chifumi_game(char *argv, t_list *list, t_move *move)
{
  char		*entree;
  t_move	*tmp;
  
  tmp = move;
  entree = readLine();
  while ((my_strcmp(entree,tmp->name) != 0) && (tmp != NULL))
    {
      if (my_strcmp(entree,"exit") == 0)
	return(list);
      tmp = tmp->next;
      if (tmp == NULL)
	{
	  if (my_strcmp(argv,"5") == 0)
	    chifumi_retry5(entree);
	  else
	    chifumi_retry3(entree);
	  entree = readLine();
	  tmp = move;
	}
    }
  list = add_coup(list, entree);
  if (my_strcmp(argv,"5") == 0)
    chifumi_game5(tmp->id, 5, list, move, argv);
  else
    list = chifumi_game3(tmp->id, 3, list, move, argv);
  return(list);
}
