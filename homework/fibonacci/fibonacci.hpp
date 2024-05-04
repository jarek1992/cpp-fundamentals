#pragma once
#include <iostream>

int fibonacci_iterative(int sequence) {
    if(sequence <= 1) {
	    return sequence;
    }

    int a = 0;
    int b = 1;

    for(int i = 2; i <= sequence; ++i) {
    	int temp = b;
	b += a;
	a = temp;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    if(sequence <= 1) {
            return sequence;

    }

   int result = fibonacci_recursive(sequence - 1) +fibonacci_recursive(sequence - 2);
   return result; 
}
