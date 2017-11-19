#ifndef FT_DATA_H
# define FT_DATA_H

# include <fnctl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_tetri
{
	char			x[4];
	char			y[4];
	char			letter;
	struct s_tetri	*next;	
}					t_tetri;

t_tetri				*ft_parse_it(int fd);

void				ft_clean_it(t_tetri *lst);

int					ft_check_it(t_tetri *lst);

#endif
