/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:55:43 by macote            #+#    #+#             */
/*   Updated: 2023/11/17 13:54:20 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_H
# define MEGAPHONE_H

class Megaphone
{
	private:
		char *string_to_upper(char *str);

	public:
		void print_upper(char **argv);
};


#endif