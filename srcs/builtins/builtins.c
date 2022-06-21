/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:56:20 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/21 18:15:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h"

void builtins(t_data *data)
{
	if (ft_strncmp(data->input.cmd, "pwd", 3) == 0 && data->input.qty_args == 0)
		builtin_pwd(data);
	if (ft_strncmp(data->input.cmd, "cd", 2) == 0)
		builtin_cd(data);
	if (data->input.qty_args == 0)
		env_var(data);
}