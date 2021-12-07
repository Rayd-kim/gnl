/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:07:20 by youskim           #+#    #+#             */
/*   Updated: 2021/12/07 18:40:30 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE = 10;

char	*get_next_line(int fd)
{
	char	str[BUFFER_SIZE];
	int		i;
	char	*result;
	int		rd_size;

	result = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	i = 0;
	rd_size = read(fd, str, sizeof(BUFFER_SIZE));


	while (i < rd_size)
	{
		if (str[i] == '\0')
		{
			
			&str[i + 1] == 
