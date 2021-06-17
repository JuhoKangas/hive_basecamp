#include "ft_list.h"
#include <stdio.h>

t_list    *ft_list_push_params(int ac, char **av);

t_list    *ft_list_last(t_list *begin_list)
{
    t_list *node;
    
    node = begin_list;
    if (node)
    {
        while ((*node).next != NULL)
        {
            node = (*node).next;
        }
    }
    return (node);
}

int main(int argc, char **argv)
{
    t_list *list;
    t_list *begin;
    
    list = ft_list_push_params(argc, argv);

    begin = ft_list_last(list);

    printf("first data in element %s\n", (*list).data);
    printf("last data in element %s", (*begin).data);
    return (0);
}