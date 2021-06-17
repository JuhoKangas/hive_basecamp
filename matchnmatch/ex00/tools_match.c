/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_match.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:01:48 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 12:00:17 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	char b[] = "main.c";
	char c[] = "**************************.c";
	char d[] = "EvaluationDay";
	char e[] = "Ev*************onD*";

	if (match(b, c) && match(d, e))
		printf("Everyhing matches!!\n");
	else
		printf("Not Matching :C\n");
}
