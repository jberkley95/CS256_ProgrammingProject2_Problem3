/**
    CS-256
    NumberConverter.cpp
    Purpose: Allows the user to enter a number in base 2, 8, 10, or 16, and can convert it into any of the
    other 3 listed bases.

    NOTE: Compiled using C++11 flag: -std=c++11

    @author John Berkley
    @version 1.0 4/22/2017
*/

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

/**
 * Pushes given value on top of stack, and updates topOfStack ptr
 *
 * @param stack to have value pushed onto
 * @param topOfStack ptr to the top of the stack
 * @param valueToBePushed onto the top of the stack
 */
void push(int* stack, int*& topOfStack, int valueToBePushed);
/**
 * Pops and returns value from the top of stack
 *
 * @param stack to have value popped from
 * @param topOfStack ptr to the top of the stack
 * @return popped value
 */
int pop(int* stack, int*& topOfStack);
/**
 * Checks if the passed stack is full (based on stack size of 100) and returns true or false
 *
 * @param stack to be checked
 * @param topOfStack ptr to the top of the stack
 * @return true if stack is full, false if it is not
 */
bool check_full(int* stack, int*& topOfStack);
/**
 * Checks if the passed stack is empty and returns true or false
 *
 * @param stack to be checked
 * @param topOfStack ptr to the top of stack
 * @return true if stack is empty, false if it is not
 */
bool check_empty(int* stack, int*& topOfStack);
/**
 * Converts numeric value passed as a string, to base 10 and returns the base 10 number
 *
 * @param num to be converted
 * @param base to be converted from
 * @param stack to be used to push and pop temp values to and from
 * @param topOfStack ptr to the top of the stack
 * @return passed num converted to base 10
 */
int convertToBase10(string num, int base, int* stack, int*& topOfStack);
/**
 * Converts passed base 10 value into a number of the new passed base, and displays it
 *
 * @param num to be converted
 * @param base to be converted to
 * @param stack to be used to push and pop temp values to and from
 * @param topOfStack ptr to the top of the stack
 */
void convertFromBase10(int num, int base, int* stack, int*& topOfStack);
/**
 * Converts passed single digit int to its hex letter representation
 *
 * @param num to be converted to hex letter
 * @return hex letter conversion of passed num
 */
string intToHexLetter(int num);

int main() {
    //Variable declaration and dynamic allocation of stack/assign topOfStack ptr
    const int STACK_SIZE = 100;
    int* stack = new int[STACK_SIZE];
    int* topOfStack = stack;
    string numToBeConverted;
    int startingBase;
    int endingBase;

    //Display menu, and read in number to be converted, starting base, and ending base
    cout << "Welcome to my Number Converter!\n";
    cout << "I can convert any positive, whole number between the bases 2, 8, 10, and 16\n";
    cout << "Enter a number to be converted (If Base 16, use capital letters): ";
    cin >> numToBeConverted;
    cout << "Enter the base this number is in: ";
    cin >> startingBase;
    cout << "Enter the base you want to change this number to: ";
    cin >> endingBase;

    //Display the converted number, and call required methods to convert it
    cout << "\n" << numToBeConverted << " converted to base " << endingBase << " is ";
    if (startingBase == 10) {
        convertFromBase10(stoi(numToBeConverted), endingBase, stack, topOfStack);
    } else if (endingBase == 10) {
        cout << convertToBase10(numToBeConverted, startingBase, stack, topOfStack) << "\n";
    } else {
        convertFromBase10(convertToBase10(numToBeConverted, startingBase, stack, topOfStack), endingBase, stack, topOfStack);
    }

    //Wait before screen closes
    cout << "\n";
    system("pause");

    //Release dynamically allocated data
    delete [] stack;
    topOfStack = NULL;

    return 0;
}

//Pushes given value on top of stack, and updates topOfStack ptr
void push(int* stack, int*& topOfStack, int valueToBePushed) {
    if (check_full(stack, topOfStack)) {
        cout << "Error: Stack Full";
        exit(0);
    } else {
        topOfStack++;
        *topOfStack = valueToBePushed;
    }
}

//Pops and returns value from the top of stack
int pop(int* stack, int*& topOfStack) {
    if (check_empty(stack, topOfStack)) {
        cout << "Error: Stack Empty";
        exit(0);
    } else {
        topOfStack--;
        return *(topOfStack + 1);
    }
}

//Checks if the passed stack is full (based on stack size of 100) and returns true or false
bool check_full(int* stack, int*& topOfStack) {
    return topOfStack == (stack + 100);
}

//Checks if the passed stack is empty and returns true or false
bool check_empty(int* stack, int*& topOfStack) {
    return topOfStack == (stack - 1);
}

//Converts numeric value passed as a string, to base 10 and returns the base 10 number
int convertToBase10(string num, int base, int* stack, int*& topOfStack) {
    int convertedNum = 0;
    int position = -1;

    reverse(num.begin(), num.end());

    //convert from ascii values to int values and push onto stack
    for (char number: num) {
        if ((int) number >= 65 && (int) number <= 70) {
            push(stack, topOfStack, (int) number - 55);
            position++;
        } else {
            push(stack, topOfStack, (int) number - 48);
            position++;
        }
    }

    //pop number from stack and calculate the converted number
    while (topOfStack != stack) {
        convertedNum += pop(stack, topOfStack) * pow(base, position);
        position--;
    }

    return convertedNum;
}

//Converts passed base 10 value into a number of the new passed base, and displays it
void convertFromBase10(int num, int base, int* stack, int*& topOfStack) {
    int temp = 0;

    //Push values onto stack
    while (num > 0) {
        temp = num % base;
        num /= base;

        push(stack, topOfStack, temp);
    }

    //Pop values from stack, and convert to hex letters if necessary before displaying
    while (topOfStack != stack) {
        temp = pop(stack, topOfStack);

        if (temp >= 10) {
            cout << intToHexLetter(temp);
        } else {
            cout << temp;
        }
    }

    cout << "\n";
}

//Converts passed single digit int to its hex letter representation
string intToHexLetter(int num) {
    switch (num) {
        case 10:
            return "A";
        case 11:
            return "B";
        case 12:
            return "C";
        case 13:
            return "D";
        case 14:
            return "E";
        case 15:
            return "F";
        default:
            cout << "Error: Invalid Hex Input";
            exit(0);
    }
}
