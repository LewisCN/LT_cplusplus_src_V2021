#include <iostream>
#include "config.h"
#include <vector>
#include <iterator>
#include <algorithm>
#include <array>

template<typename T>
void output(T &t) { std::cout << t << ' '; }

int main(int argc, char*argv[])
{
	using namespace std;
	vector<int> v(10, 3);

	for_each(v.begin(), v.end(), output<int>);

	
	return 0;
}