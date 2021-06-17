/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_count_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:27:28 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 20:27:30 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_count_if(char **tab, int(*f)(char*));

int has_digit(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int main()
{
    char *tab0[3] = {"abc", "xyz", "!!?!!"};  
    char *tab1[3] = {"hgdfj", "xyz1", "1234"}; 
    
    printf("ft_count_if has_digit:\n");
    printf("tab0: %d\n", ft_count_if(tab0, &has_digit));
    printf("tab1: %d\n", ft_count_if(tab1, &has_digit));
    
    /*printf("has_digit check:\n");
    printf("%d\n", has_digit(tab1[0]));
    printf("%d\n", has_digit(tab1[1]));
    printf("%d\n", has_digit(tab1[2]));*/
    
    return (0);
}