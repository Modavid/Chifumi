/*
** my_strcmp.c for  in /home/mod/devc/c04/my_strcmp
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 11:22:58 2016 MO david
** Last update Fri Oct 21 22:54:54 2016 MO david
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while((s1[i] != '\0') || (s2[i] != '\0'))
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s2[i] > s1[i])
	return (-1);
      i++;
	}
  return (0);
}
