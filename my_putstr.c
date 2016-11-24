/*
** my_putstr.c for  in /home/mod/devc/c03/my_putstr
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Thu Oct 20 10:31:29 2016 MO david
** Last update Thu Oct 20 16:43:33 2016 MO david
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
