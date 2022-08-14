/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:23:27 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/14 09:47:59 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "whatever.hpp"

int main(void)
{
	{
		std::cout << "int:" << std::endl;
		int a = 10; int b = 25;
		std::cout << "a=" << a << " b=" << b << std::endl;
		::swap(a,b);
		std::cout << "swap(a, b): a=" << a << " b=" << b << std::endl;
		std::cout << "min(a,b)=" << ::min(a,b) << std::endl;
		std::cout << "max(a,b)=" << ::max(a,b) << std::endl;
	}
	{
		std::cout << "char:" << std::endl;
    	char a = 'A'; char b = 'l';
    	std::cout << "a=" << a << " b=" << b << std::endl;
    	::swap(a,b);
    	std::cout << "swap(a, b): a=" << a << " b=" << b << std::endl;
    	std::cout << "min(a,b)=" << ::min(a,b) << std::endl;
    	std::cout << "max(a,b)=" << ::max(a,b) << std::endl;
	}
	{
		std::cout << "string:" << std::endl;
		std::string a = "Alvaro"; std::string b = "Morion";
        std::cout << "a=" << a << " b=" << b << std::endl;
        ::swap(a,b);
        std::cout << "swap(a, b): a=" << a << " b=" << b << std::endl;
        std::cout << "min(a,b)=" << ::min(a,b) << std::endl;
        std::cout << "max(a,b)=" << ::max(a,b) << std::endl;
	}
	{
		std::cout << "float:" << std::endl;
        float a = 1.0f; float b = 3.5f;
        std::cout << "a=" << a << " b=" << b << std::endl;
        ::swap(a,b);
        std::cout << "swap(a, b): a=" << a << " b=" << b << std::endl;
        std::cout << "min(a,b)=" << ::min(a,b) << std::endl;
        std::cout << "max(a,b)=" << ::max(a,b) << std::endl;
	}
	return(0);
}
