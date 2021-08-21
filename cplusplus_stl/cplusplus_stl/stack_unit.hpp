#pragma once
// #include <array>
// #include <list>
// #include <vector>
#include "config.h"



namespace stack_unit {
using namespace std;

/**
  array stack.
*/
template<class T, int SIZE>
class CArrayStack {
public:
	CArrayStack():top(-1){};
	~CArrayStack() {};
	void set_empty() {
		top = -1;
	}

	bool is_empty() {
		return (top == -1);
	}
	
	bool push(T elem) {
		if (top < SIZE - 1) {
			top++;
			buf[top] = elem;
	    }
		else {
			return false;
		}
		return true;
	}

	bool pop() {
		if (top != -1){
			top--;
		}
		else {
			return false;
		}

		return true;
	}

	void dump() {
    #ifdef ENABLE_LT_DEBUG
		for (int i = 0; i <= top; i++) {
			cout << buf[i] << ' ';
		}
		cout << '\n' << "############\n";
    #endif
	}
private:
	T buf[SIZE];
	int top = -1;
};


/**
	list stack.
*/
template<class T> 
class CListStack{
	typedef struct node {
		T data;
		node *next;
	} node;

public:
	CListStack() { top = nullptr; };
    ~CListStack() {};

	bool is_empty() { return (top == nullptr); }
	void set_empty() { 
		node *temp;
		while (top != nullptr) {
			temp = top;
			top = top->next;
			delete temp;	
		}
		top = nullptr; 
	}
	bool push(T elem) {
		node *temp = new node();
		if (temp == nullptr) {
			return false;
		}
		temp->data = elem;
		temp->next = top;
		top = temp;

		return true;
	}
	bool pop() {
		node *temp;

		if (top != nullptr) {
			temp = top;
			top = top->next;
			delete temp;
			return true;
		}

		return false;
	}

	void dump() {
    #ifdef ENABLE_LT_DEBUG
		node *temp = top;

		while (temp != nullptr) {
			//cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << '\n' << "mmmmmmmmmmmmmmm\n";
    #endif
	}

private:
	node *top; /*point*/
};
/*namespace stack_unit*/
}