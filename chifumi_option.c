/*
** chifumi_option.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Sat Oct 29 10:55:35 2016 MO david
** Last update Sat Oct 29 11:31:59 2016 MO david
*/

#include "my_struct.h"

int	chifumi_option(t_list *list, t_move *move)
{
  char	b;
  char	*entree;
  char	*entree2;
  int	nb;
  
  b = 'n';
  while (b != 'o')
    {
      my_putstr("voulez vous rejouer ?oui | non, exit | historique \n");
      entree = readLine();
      if (my_strcmp(entree,"oui") == 0)
	{
	  while ((my_strcmp(entree2, "3") != 0) && (my_strcmp(entree2, "5") !=0))
	    {
	      my_putstr("version ? 3 ou 5\n");
	      entree2 = readLine();
	    }
	  while (nb != 0)
	    {
	      my_putstr("nb partie ?\n");
	      entree = readLine();
	      nb = chifumi_parsing_odd(entree);
	    }
	  chifumi_start(list,  move, entree2, nb);
	}
      else if ((my_strcmp(entree,"exit") == 0) || (my_strcmp(entree,"non") ==0))
	b = 'o';
      else if (my_strcmp(entree,"historique") == 0)
	chifumi_histo(list);
    }
  return (0);
}
