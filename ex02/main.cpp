/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:31:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/08/14 10:08:46 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

/*void ft_leaks()
{
	system("leaks array");
}*/

int main(int, char**)
{
	{
		Array<float> empty;
		std::cout << "size:" << empty.size() << std::endl;
		Array<float> filled(5);
		empty = filled;
		Array<float> copy(filled);
		std::cout << "filled[1]=" << filled[1] << " empty[1]=" << empty[1] 
			<< " copy[1]=" << copy[1] << std::endl;
		filled[1] = 1.1f;
		std::cout << "filled[1]=" << filled[1] << " empty[1]=" << empty[1]
            << " copy[1]=" << copy[1] << std::endl;
	}

	{
    	Array<int> numbers(MAX_VAL);
    	int* mirror = new int[MAX_VAL];
    	srand(time(NULL));
	    for (int i = 0; i < MAX_VAL; i++)
    	{
        	const int value = rand();
        	numbers[i] = value;
			mirror[i] = value;
    	}
    	for (int i = 0; i < MAX_VAL; i++)
    	{
        	if (mirror[i] != numbers[i])
        	{
            	std::cerr << "didn't save the same value!!" << std::endl;
            	return 1;
        	}
    	}
		std::cout << "The assignment was correct\n";
    	try
    	{
        	numbers[-2] = 0;
    	}
    	catch(const std::exception& e)
    	{
        	std::cerr << e.what() << '\n';
    	}
    	try
    	{
        	numbers[MAX_VAL] = 0;
    	}
    	catch(const std::exception& e)
    	{
        	std::cerr << e.what() << '\n';
    	}

    	for (int i = 0; i < MAX_VAL; i++)
    	{	
			std::cout << "Antes: "<< numbers[i] << " Después: ";
        	numbers[i] = rand();
			std::cout << numbers[i] << std::endl;
    	}
    	delete [] mirror;//
	}
    //ft_leaks();
	return 0;
}
