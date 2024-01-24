/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macote <macote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:49:43 by macote            #+#    #+#             */
/*   Updated: 2023/12/14 13:34:12 by macote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _spotsLeft(0)
{
}

Span::Span(unsigned int N): _spotsLeft(N)
{
}

Span::~Span()
{
}

void Span::addNumber(unsigned int nb)
{
	if (_spotsLeft <= 0)
		throw std::exception();

	_span.push_back(nb);
	_spotsLeft--;
}

unsigned int Span::shortestSpan()
{
	if (_span.begin() == _span.end() || std::next(_span.begin()) == _span.end())
		throw std::exception();
		
	std::list<unsigned int> sortedList = _span;
	
	sortedList.sort();
	unsigned int smallestGap = std::numeric_limits<unsigned int>::max();
	unsigned int gap;
	for (span_it it = sortedList.begin() ; std::next(it) != sortedList.end(); it++)
	{
		if (*it > *(std::next(it)))
			gap = *it - *(std::next(it));
		else
			gap = *(std::next(it)) - *it;
		if (gap < smallestGap)
			smallestGap = gap;
	}
	return (smallestGap);
}

unsigned int Span::longestSpan()
{
	if (_span.begin() == _span.end() || std::next(_span.begin()) == _span.end())
		throw std::exception();

	std::pair<span_it, span_it> minmax;
	minmax = std::minmax_element(_span.begin(), _span.end());

	return (*minmax.second - *minmax.first);
}

void Span::fillRange(unsigned int range, unsigned int value)
{
	if (range > _spotsLeft)
		throw std::exception();

	_span.insert(_span.end(), range, value);
}

void Span::fillSpan()
{
	while (_spotsLeft)
		addNumber(rand());
}

void Span::fillSpan(unsigned int to_fill)
{
	while (to_fill-- && _spotsLeft)
		addNumber(rand());
}
