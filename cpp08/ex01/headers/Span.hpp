/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:32:46 by macote            #+#    #+#             */
/*   Updated: 2023/12/14 13:33:27 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <algorithm>
#include <utility>

typedef std::list<unsigned int>::iterator span_it;

class Span
{
private:
	unsigned int _spotsLeft;
	std::list<unsigned int> _span;

public:
	Span();
	Span(unsigned int N);
	~Span();

	void				addNumber(unsigned int nb);
	unsigned int		shortestSpan();
	unsigned int		longestSpan();

	void				fillRange(unsigned int range, unsigned int value);

	void				fillSpan();
	void				fillSpan(unsigned int to_fill);
};

#endif // __SPAN_H__