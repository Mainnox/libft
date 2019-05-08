#include "includes/ft_printf.h"

void		ft_putchar_printf(t_printf *h)
{
	write(1, &h->str[h->i], 1);
}
