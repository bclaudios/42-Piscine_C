/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:55:53 by scoron            #+#    #+#             */
/*   Updated: 2018/09/16 19:42:30 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 1

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb, int amount_total);
char	*ft_read(void);
void	ft_print(char *str, int y, int x);
void	ft_print_result(char *name, int y, int x, int i);
void	ft_putstr(char *str);
int		ft_check_col(char *str);
int		ft_check_line(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
int		howmcolle(char *str, int len, int y, int x);
void	ft_putchar(char c);
int		check_colle00(char *input, int len, int y, int x);
int		check_colle01(char *input, int len, int y, int x);
int		check_colle02(char *input, int len, int y, int x);
int		check_colle03(char *input, int len, int y, int x);
int		check_colle04(char *input, int len, int y, int x);

#endif
