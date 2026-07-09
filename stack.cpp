/* *************************************************
*  Name: Nikhil Prabhu
*  Assignment: Simple Stack
*  Purpose:
*
************************************************* */

#include "stack.h"

Stack::Stack() {
    /* *************************************************
        Default constructor for Stack. It accepts no parameters.

        @param na : na
        @return na : na
        @exception na : na
        @note When the contructor completes, the object should
              be fully ready for use. No further set-up needed.
        * ************************************************* */

    top = -1;
}

Stack::~Stack() {
    /* *************************************************
    There is nothing for the destructor to do. This is
    just a stub and not needed.

    @param na : na
    @param na : na
    @return na : na
    @exception na : na
    @note na
    * ************************************************* */
}

int Stack::pop() {
    /* *************************************************
    Returns the top value of stack and then removes it
    @param na : na
    @return (int) : the value popped
    @exception std::string : if stack underflow occurs
    @note na
    * ************************************************* */
    if (isEmpty()) {
        throw std::string("Underflow detected");
    }

    int popResult = stack[top];
    top--;

    return popResult;
}

int Stack::peek() {
    /* *************************************************
    Returns the top value of the stack without removing
    @param na : na
    @return (int) : the value at top index
    @exception std::string : if stack underflow occurs
    @note na
    * ************************************************* */
    if (isEmpty()) {
        throw std::string("Underflow detected");
    }

    return stack[top];
}


bool Stack::push(int pushValue) {
    /* *************************************************
    Insert value at the top of the stack.
    @param (int) : integer value to push onto stack
    @return (bool) : true if pushed, false if overflow
    @exception na : na
    @note na
    * ************************************************* */
    if (top >= (STACKSIZE - 1)) {
        return false;
    }

    top++;
    stack[top] = pushValue;
    return true;
}

bool Stack::isEmpty() {
    /* *************************************************
    Checks if the stack is empty or not.
    @param na : na
    @return (bool) : True if empty, false if not
    @exception na : na
    @note na
    * ************************************************* */

    if (top < 0) {
        return true;
    }

    return false;
}





