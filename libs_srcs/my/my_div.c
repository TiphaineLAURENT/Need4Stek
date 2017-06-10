/*
** my_div.c for my_div in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 22:06:54 2017 Tiphaine LAURENT
** Last update Sat May 27 22:14:18 2017 Tiphaine LAURENT
*/

#include "my.h"

t_div		my_div(int numerator, int denominator)
{
  t_div		result;

  result.quot = 0;
  result.rem = 0;
  if (denominator == 0)
    return (result);
  result.quot = numerator / denominator;
  result.rem = numerator % denominator;
  return (result);
}
