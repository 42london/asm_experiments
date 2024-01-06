/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:17:44 by abelov            #+#    #+#             */
/*   Updated: 2024/01/06 17:17:46 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int	main(void)
{
	char	*str;
	size_t	len;

	str = "Wello Horld!\n";
	len = strlen(str);
	/* write(STDOUT_FILENO,"Hey!\n", 5); */
	syscall(SYS_write, STDOUT_FILENO, str, len);
	return (0);
}
