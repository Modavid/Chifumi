/*
** chifumi_error.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Sat Oct 29 01:02:36 2016 MO david
** Last update Sat Oct 29 01:20:32 2016 MO david
*/
#include <stdlib.h>
#include "my_struct.h"

void    chifumi_error()
{
  my_putstr("./chifumi -v 'version 3 ou 5' ");
  my_putstr("-d 'duree de la partie (impaire)'\n");
}

void	chifumi_retry3(char *entree)
{
  my_putstr(entree);
  my_putstr(" - n'est pas une option valide\n");
  my_putstr("retapez [ rock | paper | scissors  ]\nA votre tour > ");
}

void	chifumi_retry5(char *entree)
{
  my_putstr(entree);
  my_putstr(" - n'est pas une option valide\n");
  my_putstr("retapez [ rock | paper | scissors | spock | lizard ]");
  my_putstr("\nA votre tour > ");
}
