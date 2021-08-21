#include <iostream>
#include "config.h"
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>
#include <array>
#include "stack_unit.hpp"

template<typename T>
void output(T &t) { std::cout << t << ' '; }

namespace vector_unit {
	using std::vector;

template<class _Value_Type>
void vector_unit(int t, _Value_Type start) {
	vector<_Value_Type> vec;

	for (int i = 0; i < t; i++) {
		vec.push_back(start + i);
	}
	std::cout << "@mark01" << std::endl;
	std::for_each(vec.begin(), vec.end(), output<_Value_Type>);
}
template<typename _Value_Type>
void vector_unit(int t) {
	vector<_Value_Type> vec;
	for (int i = 0; i < t; i++) {
		vec.push_back(i);
	}
	std::cout << "@mark02" << std::endl;
	std::for_each(vec.begin(), vec.end(), output<_Value_Type>);
}

}

int main(int argc, char*argv[])
{
	using namespace std;
	//using namespace vector_unit;
	/*直接申明命名空间的函数*/
	// using vector_unit::vector_unit;
	// vector_unit<int, int>(10, 3);
	// vector_unit::vector_unit<int>(10, 3);
	
	using ::stack_unit::CArrayStack;
	using ::stack_unit::CListStack;

	CArrayStack<int, 100> stk;
	CListStack<int> lt_stk;


	cout << "stack push operator" << endl;
	for (int i = 0; i < 10; i++) {
		stk.push(i);
		lt_stk.push(i);
	}

	stk.dump();
	lt_stk.dump();

	cout << "stack pop operator" << endl;
	for (int i = 0; i < 7; i++) {
		stk.pop();
		lt_stk.pop();
	}

	stk.dump();
	lt_stk.dump();
	return 0;
}