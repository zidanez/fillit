/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:37:35 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/05/03 15:37:37 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("usage: ./fillit target_file\n");
	else if (argc > 2)
		ft_putstr("usage: ./fillit target_file\n");
	else if (argc == 2)
		fillit(argv[1]);
	return (0);
}
