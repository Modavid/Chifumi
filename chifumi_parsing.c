/*
** chifumi_parsing.c for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 09:15:29 2016 MO david
** Last update Sat Oct 29 03:26:27 2016 MO david
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_struct.h"

int	chifumi_parsing_odd(char *str)
{
  int	i;
  int	nb;
  
  i = 0;
  while ((str[i] != '\0') && (str[i] >= '0'&& str[i] <= '9'))
    i++;
  if (str[i] == '\0')
    if ((str[i - 1] - 48) % 2  == 1)
      {
	nb = (my_getnbr(str) / 2) + 1;
	return(nb);
      }
  return(1);
}

int	chifumi_parsing(int argc, char **argv)
{
  int error;

  error = 0;
  if (argc != 5)
    error = 1;
  else if (my_strcmp(argv[1], "-v") != 0)
    error = 1;
  else if((my_strcmp(argv[2], "3") != 0) && (my_strcmp(argv[2],"5") != 0))
    error = 1;
  else if (my_strcmp(argv[3], "-d") != 0)
    error = 1;
  else
    error = chifumi_parsing_odd(argv[4]);
  if (error == 1)
    {
      chifumi_error();
      return (1);
    }
  return (error);
}

