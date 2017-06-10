/*
** action.c for action in /home/TiphaineLaurent/IAs/NFS/ai/src
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Jun  1 15:07:01 2017 Tiphaine LAURENT
** Last update Sun Jun  4 18:21:41 2017 Tiphaine LAURENT
*/

#include <stdlib.h>
#include <stdio.h>

#include "n4s.h"
#include "my.h"
#include "get_next_line.h"

static int	exec_cmd(char *cmd, char *strength,
			 char *sign)
{
  my_putstr(cmd);
  my_putstr(sign);
  my_putstr(strength);
  if (my_strncmp(my_str_to_wordtab(get_next_line(0), ':')[TRACK]
		 , "Track Cleared", 13))
    return (CLEARED);
  return (0);
}

static int32_t 	set_speed(float middle)
{
  int32_t	ret;

  ret = 0;
  if (middle >= 2000)
    ret = SPEED_1;
  else if (middle >= 1500)
    ret = SPEED_2;
  else if (middle >= 1000)
    ret = SPEED_3;
  else if (middle >= 600)
    ret = SPEED_4;
  else if (middle >= 400)
    ret = SPEED_5;
  else
    ret = SPEED_6;
  return (ret);
}

static int32_t 	set_direction(float dir, float middle)
{
  int32_t	ret;

  ret = 0;
  if (middle >= 1500)
    ret = DIR_1(LEFT_RIGHT(dir));
  else if (middle >= 1000)
    ret = DIR_2(LEFT_RIGHT(dir));
  else if (middle >= 600)
    ret = DIR_3(LEFT_RIGHT(dir));
  else if (middle >= 400)
    ret = DIR_4(LEFT_RIGHT(dir));
  else if (middle >= 200)
    ret = DIR_5(LEFT_RIGHT(dir));
  else
    ret = DIR_6(LEFT_RIGHT(dir));
  return (ret);
}

int		action(char **infos)
{
  float		right;
  float		left;
  float		middle;

  if (my_tablen((const char **)infos) < TRACK)
    return (-1);
  right = atof(infos[RIGHT_RAY]);
  left = atof(infos[LEFT_RAY]);
  middle = atof(infos[MIDDLE_RAY]);
  if (set_speed(middle) == CLEARED)
    return (CLEARED);
  if (set_direction(left - right, middle) == CLEARED)
    return (CLEARED);
  return (0);
}
