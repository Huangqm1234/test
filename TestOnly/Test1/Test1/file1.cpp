#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>



int main()
{
	int b = 10;
	int c = 20;
	const int * a=&b;
	std::cout << *a << std::endl;
	*a = 10;
	std::cout << *a << std::endl;
	return 0;
}