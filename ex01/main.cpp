/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:46:09 by amorion-          #+#    #+#             */
/*   Updated: 2022/06/26 10:54:26 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
#include<iostream>

template<typename T>
void	print_element(T const &x)
{
	std::cout << x << std::endl;
};

int main(void)
{
	int x[] = {1,2,3,4,5};
	float y[] = {.1,.2,.3,.4,.5};
	char z[] = {'a', 'b', 'c', 'd', 'e'};
	iter(x,5,print_element);
	iter(y,5,print_element);
	iter(z,5,print_element);
	return(0);
}
