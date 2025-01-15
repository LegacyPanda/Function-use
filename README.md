# Function use

## To Do
- The purpose of this project is to get familiar with functions.
- I have to implement a value-returning function, passing-by-value function and a passing-by-reference function.

## Libraries used
- <iostream>
    cout
    endl
    cin
    cerr
- <cmath>
    pow() - powering
- <string>
    ignore() - used to ignore characters from the input buffer
    getline() - used to get the entire line of an input from std::cin

## 2025-01-14
- A fallthrough occurs when I do not include break; or return; keyword in the cases.
- What will happen is that the program will move straight into the next case even if it does not include the condition.

## 2025-01-15
- ITS MY BIRTHDAY!!!
- Implemented the counting function.
- In order for the order to be in any direction I had to check the condition if the starting value was greater or lower than the ending value
  which was an improvement on my last project which actually allowed me to see my previous mistake.
- When passing by reference the passed variable must be modifiable.
    eg. void func(int& num);
        func(3); // This is illegal
        int x = 3;
        func = 3;
