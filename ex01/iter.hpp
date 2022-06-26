/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:41:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/26 10:51:20 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *ptr, int length, void f(const T&))
{
	for (int i = 0; i < length; i++)
		f(ptr[i]);
};
#endif
