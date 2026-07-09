/* *************************************************
*  Name: Nikhil Prabhu
*  Assignment: Simple Stack
*  Purpose: Establish headers for the stack
*
************************************************* */

#ifndef ASSIGNMENT4_STACK_H
#define ASSIGNMENT4_STACK_H
#define STACKSIZE 10

#include <string>

class Stack {

public:

    /**********************
    Constructors/Destructor
    ***********************/
    Stack();
    ~Stack();

    /**********************
    Methods
    ***********************/
    int pop();
    int peek();
    bool push(int);
    bool isEmpty();

private:

    /**********************
    Attributes
    ***********************/
    int top;
    int stack[STACKSIZE];

};





#endif //ASSIGNMENT4_STACK_H
