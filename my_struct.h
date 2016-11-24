/*
** my_struct.h for  in /home/mod/devc/chifumi/chifumi
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 28 14:50:45 2016 MO david
** Last update Sat Oct 29 11:41:23 2016 MO david
*/

#ifndef MY_STRUCT_H_
#define MY_STRUCT_H_
#include "my_struct.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_list
{
  int		round;
  char		*coup;
  char		*coup2;
  int		score;
  int		score2;
  struct s_list *next;
  struct s_list	*prev;
}               t_list;

typedef struct	s_move
{
  int		id;
  char		*name;
  int		beat;
  int		beat2;
  struct s_move	*next;
}		t_move;

int		my_getnbr(char *str);
int		chifumi_parsing(int argc, char **argv);
t_list		*chifumi_game(char *argv, t_list *list, t_move *move);
void		chifumi_aff(char *version, char *tour);
t_move		*mk_move(t_move *move, char *argv);
t_list		*mk_list(t_list *list, int round);
void		my_putstr(char *str);
char		*readLine();
int		my_strcmp(char *s1, char *s2);
int		my_rand(int version);
t_list		*init_list(t_list *list, int round);
void		 chifumi_error();
void		chifumi_retry3(char *entree);
void		chifumi_retry5(char *entree);
void		my_put_nbr(int n);
void		chifumi_aff2(t_list *list);
t_list          *add_coup(t_list *list, void *coup);
t_list          *add_coup2(t_list *list, void *coup2);
t_list          *add_score(t_list *list);
t_list          *add_score2(t_list *list);
t_list		*add_round(t_list *list);
void		chifumi_aff_score(int score, int score2);
void            chifumi_histo(t_list *list);
void		testeur2(t_list *list);
void		chifumi_start(t_list *list, t_move *move,char *argv, int p);
int		chifumi_option(t_list *list, t_move *move);
int		chifumi_parsing_odd(char *str);
#endif
