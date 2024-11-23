#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str_format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putdigit(long n, int base, char f_spe);
int	ft_putunsigned(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_putptr_rec(unsigned long n);
#endif
