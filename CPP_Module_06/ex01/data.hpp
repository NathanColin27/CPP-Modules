#include <string>
#include <time.h>
#include <iostream>

struct Data {
	std::string str1;
	int n;
	std::string str2;
};

void *serialize(void);
Data *deserialize(void *raw);