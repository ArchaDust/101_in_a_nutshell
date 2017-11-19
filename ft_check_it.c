#include "ft_data.h"

static int	chkf(int x1, int y1, int x2, int y2)
{	
	if (x2 == (x1 + 1) && y2 == y1)
		return (1);
	if (x2 == x1 && y2 == (y1 + 1))
		return (1);
	if (x2 == (x1 - 2) && y2 == (y1 + 1)
		return (3);
	if (x2 == (x1 - 1) && y2 == (y1 + 1)
		return (2);
	return (0);
}

static int	chks(int x2, int y2, int x3, int y3)
{
	if (x3 == (x2 + 1) && y3 == y2)
		return (1);
	if (x3 == x2 && y3 == (y2 + 1))
		return (1);
	if (x3 == (x2 - 1) && y3 == (y2 + 1))
		return (2);
	return (0);
}

statis int	chkt(int x3, int y3, int x4, int y4)
{
	if (x4 == (x3 + 1) && y4 == y3)
		return (1);
	if (x4 == x2 && y4 == (y2 + 1))
		return (1);
	return (0);
}

static int	chkworst(int wcase, t_tetri *lst)
{
	if (wcase == 3)
	{
		if (lst->x[2] == (lst->x[1] + 1) && lst->y[2] == lst->y[1])
			return (chkworst(2, lst));
		return (0);
	}
	if (wcase == 2)
	{
		if (lst->x[3] == (lst->x[2] + 1) && lst->y[3] == lst->y[2])
			return (1);
		return (0);
	}
}

int			ft_check_it(t_tetri *lst)
{
	int		res;
	
	if (!lst)
		return (0);
	res = chkf(lst->x[0], lst->y[0], lst->x[1], lst->y[1])
	if (!res)
		return (-42);
	else if (res > 1)
		res = chkworst(res, lst);
	if (!res)
		return (-42);
	res = chks(lst->x[1], lst->y[1], lst->x[2], lst->y[2]))
	if (!res)
		return (-42);
	else if (res > 1)
		res = chkworst(res, lst);
	if (!res)
		return (-42);
	res = chkt(lst->x[2], lst->y[2], lst->x[3], lst->y[3]))
	if (!res)
		return (-42);
	return (1 + ft_check_it(lst->next));
}
