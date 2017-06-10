/*
** ai.c for ai in /home/TiphaineLaurent/IAs/NFS/ai/src
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Jun  1 14:16:47 2017 Tiphaine LAURENT
** Last update Sun Jun  4 18:20:19 2017 Tiphaine LAURENT
*/

#include <stdio.h>
#include <string.h>

#include "n4s.h"
#include "my.h"

int		ai(void)
{
  char		*line;
  int		read;
  size_t	len;
  char		**infos;

  my_putstr(START_SIMULATION);
  while (true)
    {
      line = NULL;
      len = 0;
      my_putstr(GET_DIST);
      read = getline(&line, &len, stdin);
      line[read - 1] = EOL;
      infos = my_str_to_wordtab(line, LIDAR_SEPARATOR);
      if (my_strcmp(infos[TRACK], "Track Cleared") == true)
	break ;
      if (action(infos) == CLEARED)
	return (CLEARED);
    }
  my_putstr(STOP_SIMULATION);
  return (0);
}
