/*
** n4s.h for n4s in /home/TiphaineLaurent/IAs/NFS/ai/include
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Jun  1 14:10:54 2017 Tiphaine LAURENT
** Last update Sun Jun  4 18:20:52 2017 Tiphaine LAURENT
*/

#ifndef N4S_H_
# define N4S_H_

# define EOL			'\0'
# define LIDAR_SEPARATOR	':'
# define RETURN			'\n'

# define LEFT_RAY		4
# define RIGHT_RAY		34
# define MIDDLE_RAY		15
# define TRACK			35

# define START_SIMULATION	"START_SIMULATION\n"
# define CLEARED		1
# define STOP_SIMULATION	"STOP_SIMULATION\n"

# define SPEED			0
# define DIR			1

# define FORWARD		"CAR_FORWARD:0.5\n"
# define GET_DIST		"GET_INFO_LIDAR\n"
# define SPEED_1		exec_cmd("CAR_FORWARD:", "1.0\n", "")
# define SPEED_2		exec_cmd("CAR_FORWARD:", "0.8\n", "")
# define SPEED_3		exec_cmd("CAR_FORWARD:", "0.5\n", "")
# define SPEED_4		exec_cmd("CAR_FORWARD:", "0.4\n", "")
# define SPEED_5		exec_cmd("CAR_FORWARD:", "0.2\n", "")
# define SPEED_6		exec_cmd("CAR_FORWARD:", "0.1\n", "")
# define LEFT_RIGHT(x)		(x < 0 ? "-" : "")
# define DIR_1(x)		exec_cmd("WHEELS_DIR:", "0.005\n", x)
# define DIR_2(x)		exec_cmd("WHEELS_DIR:", "0.05\n", x)
# define DIR_3(x)		exec_cmd("WHEELS_DIR:", "0.1\n", x)
# define DIR_4(x)		exec_cmd("WHEELS_DIR:", "0.2\n", x)
# define DIR_5(x)		exec_cmd("WHEELS_DIR:", "0.3\n", x)
# define DIR_6(x)		exec_cmd("WHEELS_DIR:", "0.5\n", x)
# define STOP			"CAR_FORWARD:0\n"

int		ai(void);
int		action(char **infos);

#endif /* !N4S_H_ */
