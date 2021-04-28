/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:25:19 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 16:27:51 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void find_replace(std::string &file, std::string old_str, std::string new_str)
{
   size_t pos = file.find(old_str); 
   while( pos != std::string::npos) 
    { 
        file.replace(pos, old_str.size(), new_str); 
        pos = file.find(old_str, pos+new_str.size()); 
    } 
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "USAGE : ./replace [FILENAME] [STRING_TO_REPLACE] [NEW_STRING]" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	if (filename.length() == 0 || str1.length() == 0 || str2.length() == 0)
	{
		std::cout << "Enter non-empty arguments" << std::endl;
		return (1);
	}
	std::ifstream input(filename);
	std::string content;
	for(std::string line; getline(input, line);)
	{
		content += line;
		content += "\n";
	}
	content.resize(content.size() - 1);
	find_replace(content, str1, str2);
	std::ofstream file(filename + ".replace");
	file << content;
	return (0);
}