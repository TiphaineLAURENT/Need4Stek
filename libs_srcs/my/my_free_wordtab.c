/*
** my_free_wordtab.c for my_free_wordtab in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Jun  1 14:54:14 2017 Tiphaine LAURENT
** Last update Thu Jun  1 15:01:54 2017 Tiphaine LAURENT
*/

#include "my.h"

void		my_free_wordtab(char **wordtab)
{
  size_t	len;

  if (wordtab == NULL)
    return ;
  len = 0;
  while (wordtab[len])
    {
      free(wordtab[len]);
      len += 1;
    }
  free(wordtab);
}
