/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:26:54 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/06 12:11:22 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_strncmp(const char *lhs, const char *rhs, size_t count);
char *ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memchr(const void* ptr, int ch, size_t count);
int	ft_memcmp(const void *lhs, const void *rhs, size_t count);
int	ft_toupper(int ch);
int	ft_tolower(int ch);

#endif
