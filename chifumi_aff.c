/*
** chifumi_aff.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 13:53:26 2016 MO david
** Last update Sat Oct 29 10:52:05 2016 MO david
*/
#include "my_struct.h"
#include <stdlib.h>

void	chifumi_aff2(t_list *list)
{
  my_putstr("\n");
  my_putstr("- - - - - - - - - - -\n");
  my_putstr("ROUND :");
  my_put_nbr(list->round);
  add_round(list);
  my_putstr("\n");
  my_putstr("A votre tour > \n") ;
}

void	chifumi_aff(char *version, char *tour)
{
  my_putstr("- - - - - - - - - - -\n");
  my_putstr("\n");
  my_putstr("VERSION : ROCK - PAPER - SCISSORS");
  if (*version == '5')
    my_putstr(" - LIZARD - SPOCK\n");
  else
    my_putstr("\n");
  my_putstr("BEST OF : ");
  my_putstr(tour);
  my_putstr("\n");
}

void	chifumi_aff_score(int score, int score2)
{
  my_putstr("Le Score Joueur : ");
  my_put_nbr(score);
  my_putstr("\nLe Score Ordinateur: ");
  my_put_nbr(score2);
  my_putstr("\n");
  my_putstr("\n");
}

void		chifumi_histo(t_list *list)
{
  my_putstr("\nHISTORIQUE\n");
  while (list != NULL)
    {
      if (list->coup != NULL)
	{
	  my_putstr("\n");
	  my_putstr("- - - - - - - - - - -\n");
	  my_putstr("ROUND :");
	  my_put_nbr(list->round);
	  my_putstr("\n");
	  my_putstr(list->coup);
	  my_putstr(" VS ");
	  my_putstr(list->coup2);
	  my_putstr("\n");
	  chifumi_aff_score(list->score, list->score2);
	}
      list = list->next;
    }
}
