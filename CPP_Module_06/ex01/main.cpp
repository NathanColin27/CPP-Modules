#include "data.hpp"

int main(void)
{
	srand(time(0));

	void *raw;
	Data *data;
	raw = serialize();
	data = deserialize(raw);
	std::cout << "data->n = " << data->n << std::endl;
	std::cout << "data->str1 = " << data->str1 << std::endl;
	std::cout << "data->str2 = " << data->str2 << std::endl;
	delete data;
	return 0;
}