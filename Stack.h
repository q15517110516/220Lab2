#ifndef STACK_H
#define STACK_H

#include "LL.h"

template <typename T> class Stack {
private:
	// using a LinkedList as the storage for this Stack 
	LinkedList<T> & data;

public:
	// constructor
	Stack (): 
		data {*(new LinkedList<T>())} {} 

	// accessors -----------------------------------------------------

	// returns a copy of the pointer to the local data variable 
	LinkedList<T>& getData() const {
		return data;
	}

	void printStack() const {
		data.printList(); 
	}

	// return first element of stack without removing 
	T peek() const {
		// CODE HERE 
        T *temp = data.findKth(0);
        if (temp == nullptr) {
            return T {}; // PLACEHOLDER FOR COMPILING 
        } else {
            return *temp;
        }
	}

	// mutators ------------------------------------------------------

	// remove the element off the top of the stack and return it. If 
	// the stack is empty, return the empty constructor for type T. 
	T pop(){
		// CODE HERE
        T *temp = data.findKth(data.getSize()-1);
        if (temp == nullptr) {
            return T {}; // PLACEHOLDER FOR COMPILING 
        } else {
            T ret {*temp};
            data.removeTail();
            return ret;
        }
	}

	// push item thing of type T onto the stack 
	void push(T thing) {
		// CODE HERE 
        data.add(thing);
	}


};




#endif 
