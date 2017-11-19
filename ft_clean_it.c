#include "ft_data.h"

void		ft_clean_it(t_tetri *lst)
{
	t_tetri	*tmp;
	
	if (!lst)
		return ;
	tmp = lst->next;
	free(lst);
	if (tmp)
		ft_clean_it(tmp);
}
