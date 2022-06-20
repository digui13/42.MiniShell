/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:07:05 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/18 16:58:10 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h"

void	read_input(t_data *data)
{
	data->input.line = readinput(BCYN "➜  " BGRN "MiniShell:" RST);
	if (data->input.line == NULL)
		input_invalid(data);
	if (*data->input.line)
		add_history(data->input.line);
	organize_line(data);
	builtins(data);
	if (data->input.line != NULL)
		free(data->input.line);
}