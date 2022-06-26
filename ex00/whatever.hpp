/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:16:01 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/26 10:36:39 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x,T &y)
{
	T aux = x;
	x = y;
	y = aux;
};

template<typename T>
T	min(T const &x, T const &y)
{
	return(x < y ? x : y);
};

template<typename T>
T	max(T const &x, T const &y)
{
	return(x > y ? x : y);
};
#endif

