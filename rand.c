/*
** rand.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 17:00:20 2016 MO david
** Last update Fri Oct 28 17:22:47 2016 MO david
*/

#include <stdlib.h>
#include <time.h>

int	my_rand(int version)
{
  int	random;
  
  srand (time (NULL));
  random = (rand() % version) + 1;
  
  return (random);
}
