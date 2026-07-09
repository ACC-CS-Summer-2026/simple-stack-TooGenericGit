/* *************************************************
*  Name: Nikhil Prabhu
*  Assignment: Simple Stack
*  Purpose: Demonstrate a simple stack in C++
*
************************************************* */

#include "main.h"

int main(){

    Stack stackDemo;

    std::cout << "Initial state of stack: ";
    if (stackDemo.isEmpty()) {
        std::cout << "Empty" << std::endl;
    } else {
        std::cout << "Not Empty" << std::endl;
    }

    // test underflow using pop
    std::cout << "Attempting pop: ";
    try {
        stackDemo.pop();
        std::cout << "Exception not handled" << std::endl;
    } catch (std::string e) {
        std::cout << e << std::endl;
    }

    // test underflow using peek
    std::cout << "Attempting peek: ";
    try {
        stackDemo.peek();
        std::cout << "Exception not handled" << std::endl;
    } catch (std::string e) {
        std::cout << e << std::endl;
    }

    // test pushing until overflow
    std::cout << "Pushing numbers to stack" << std::endl;
    for (int i = 0; i < STACKSIZE; i++) {
        int demoVal = i + 1;

        if (stackDemo.push(demoVal)) {
            std:: cout << "Pushed " << demoVal << ", peek() returns " <<  stackDemo.peek() << std::endl;
        } else {
            std::cout << "Push failed, overflow detected";
        }

        if (stackDemo.isEmpty()) {
            std::cout << "isEmpty() returns stack is empty" << std::endl;
        } else {
            std::cout << "isEmpty() returns stack is not empty" << std::endl;
        }
    }

    // test popping until underflow
    std::cout << "Popping numbers from stack" << std::endl;
    while (!stackDemo.isEmpty()) {
        try {
            int demoTop = stackDemo.peek();
            int demoPop = stackDemo.pop();
            std::cout << "peek() returns " << demoTop << ", popping " << demoPop << std::endl;
        } catch (std::string e) {
            std::cout << "Error: " << e << std::endl;
        }

        if (stackDemo.isEmpty()) {
            std::cout << "isEmpty() returns stack is empty" << std::endl;
        } else {
            std::cout << "isEmpty() returns stack is not empty" << std::endl;
        }
    }



}



