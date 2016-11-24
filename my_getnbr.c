/*
** my_getnbr.c for  in /home/mod/devc/c05/my_getnbr
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Sat Oct 22 16:48:51 2016 MO david
** Last update Fri Oct 28 13:04:14 2016 MO david
*/

int	my_getnbr(char *str)
{
  long double	nbr;
  int	i;
  int	op;

  i = 0;
  nbr = 0;
  op = 1;
  
  while (((str[i] >= '0') && (str[i] <= '9')) || str[i] == '-' || str[i] ==  '+')
    {
      if (str[i] == '-')
	{
	  op = op * -1;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	{
	  nbr = nbr * 10 + ((str[i]) - 48);
	}
      i++;
    }
  nbr = nbr * op;
  return (nbr);
}
