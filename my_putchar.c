/*
** my_putchar.c for  in /home/mod/c1/my_putchar
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Mon Oct 17 11:30:17 2016 MO david
** Last update Mon Oct 17 12:04:30 2016 MO david
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
