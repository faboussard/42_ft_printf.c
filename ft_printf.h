/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa  <faboussa@student.42lyon.f>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:17:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/20 20:31:58 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *string);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_print_and_count_int(int n, const char *base);
int	ft_print_and_count_unsigned_long(unsigned long int n, const char *base);
int	ft_print_and_count_unsigned_int(unsigned int n, const char *base);

#endif //FT_PRINTF_H
