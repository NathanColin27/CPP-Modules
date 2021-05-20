#include "data.hpp"

void *serialize(void)
{
	std::string printable_list;
	Data *data = new Data;
	for (char i = ' '; i <= '~'; ++i) 
		printable_list += i;
	size_t list_len = printable_list.length();
	size_t s1_len = rand() % 20 + 1;
	size_t s2_len = rand() % 20 + 1;
	for (size_t i = 0; i < s1_len;  i++)
		data->str1 += printable_list[rand()% list_len];
	for (size_t i = 0; i < s2_len;  i++)
		data->str2 += printable_list[rand()% list_len];
	data->n = rand() % INT32_MAX;

	// std::cout << "(Before serialization) data->n = " << data->n << std::endl;
	// std::cout << "(Before serialization) data->str1 = " << data->str1 << std::endl;
	// std::cout << "(Before serialization) data->str2 = " << data->str2 << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}
