#ifndef DEQUE_H
#define DEQUE_H

#include "LL.h"


template <typename T> class Deque {
private:
	// using a LinkedList as the storage for this Deque 
	LinkedList<T>& data;


public: 
	Deque(): 
		data {*(new LinkedList<T>())} {} 


	// accessors -----------------------------------------------------

	LinkedList<T>& getData() const {
		return data;
	}

	// for your testing purposes - should print out each element of 
	// the deque without destroying the original deque 
	void printDeque() const {
		data.printList();
	}

	// returns the back element 
	T getBack() const {
		// CODE HERE
        T* temp =  data.findKth(data.getSize()-1);
        if (temp == nullptr)
            return T {}; // PLACEHOLDER FOR COMPILING 
        else
            return *temp;
	}

	// returns the front element 
	T getFront() const {
		// CODE HERE
        T* temp = data.findKth(0);
        if (temp == nullptr)
            return T {}; // PLACEHOLDER FOR COMPILING 
        else
            return *temp;
	}

	// inserts element thing at back of Deque 
	void pushBack(T thing){
		// CODE HERE
        data.add(thing);
	}

	// inserts element thing at front of Deque 
	void pushFront(T thing){
		// CODE HERE
        data.insert(thing);
	}

	// removes element at back of Deque and returns it
	T popBack(){
		// CODE HERE
        T* temp = data.findKth(data.getSize()-1);
        if (temp == nullptr)
            return T {}; // PLACEHOLDER FOR COMPILING 
        else {
            T ret {*temp};
            data.removeTail();
            return ret;
        }
	}

	// removes element at front of Deque and returns it
	T popFront(){
		// CODE HERE
        T* temp = data.findKth(0);
        if (temp == nullptr)
            return T {}; // PLACEHOLDER FOR COMPILING 
        else {
            T ret {*temp};
            data.removeHead();
            return ret;
        }
	}

};



#endif 
