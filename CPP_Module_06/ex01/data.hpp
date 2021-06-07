#ifndef DATA_HPP
#define DATA_HPP
#define INT32_MAX 2147483647

#include <string>
#include <time.h>
#include <iostream>
#include <stdlib.h>


struct Data {
	char str1[8];
	int n;
	char str2[8];
};

void *serialize(void);
Data *deserialize(void *raw);

#endif