#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		next_node = temp->next;
		ft_lstdelone(temp, del);
		temp = next_node;
	}
	*lst = NULL;
}