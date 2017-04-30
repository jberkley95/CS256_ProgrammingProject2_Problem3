//Created By: John Berkley
//Class: CS 256
//Date Last Edited: 4/26/2017

#include <iostream>
#include <cmath>

using namespace std;

void push(int* stack, int*& topOfStack, int valueToBePushed);
int pop(int* stack, int*& topOfStack);
bool check_full(int* stack, int*& topOfStack);
bool check_empty(int* stack, int*& topOfStack);
int convertToBase10(string num, int base, int* stack, int*& topOfStack);
void convertFromBase10(int num, int base, int* stack, int*& topOfStack);
string intToHexLetter(int num);

int main() {
    const int STACK_SIZE = 100;
    int* stack = new int[STACK_SIZE];
    int* topOfStack = stack;
    string numToBeConverted;
    int startingBase;
    int endingBase;

    cout << "Welcome to my Number Converter!\n";
    cout << "I can convert any positive, whole number between the bases 2, 8, 10, and 16\n";
    cout << "Enter a number to be converted (If Base 16, use capital letters): ";
    cin >> numToBeConverted;
    cout << "Enter the base this number is in: ";
    cin >> startingBase;
    cout << "Enter the base you want to change this number to: ";
    cin >> endingBase;

    cout << "\n" << numToBeConverted << " converted to base " << endingBase << " is ";
    if (startingBase == 10) {
        convertFromBase10(stoi(numToBeConverted), endingBase, stack, topOfStack);
    } else if (endingBase == 10) {
        cout << convertToBase10(numToBeConverted, startingBase, stack, topOfStack);
    } else {
        convertFromBase10(convertToBase10(numToBeConverted, startingBase, stack, topOfStack), endingBase, stack, topOfStack);
    }

    delete [] stack;
    topOfStack = NULL;

    return 0;
}
void push(int* stack, int*& topOfStack, int valueToBePushed) {
    if (check_full(stack, topOfStack)) {
        cout << "Error: Stack Full";
        exit(0);
    } else {
        topOfStack++;
        *topOfStack = valueToBePushed;
    }
}

int pop(int* stack, int*& topOfStack) {
    if (check_empty(stack, topOfStack)) {
        cout << "Error: Stack Empty";
        exit(0);
    } else {
        topOfStack--;
        return *(topOfStack + 1);
    }
}

bool check_full(int* stack, int*& topOfStack) {
    return topOfStack == (stack + 100);
}

bool check_empty(int* stack, int*& topOfStack) {
    return topOfStack == (stack - 1);
}

int convertToBase10(string num, int base, int* stack, int*& topOfStack) {
    int convertedNum = 0;
    int position = -1;

    reverse(num.begin(), num.end());

    for (char number: num) {
        if ((int) number >= 65 && (int) number <= 70) {
            push(stack, topOfStack, (int) number - 55);
            position++;
        } else {
            push(stack, topOfStack, (int) number - 48);
            position++;
        }
    }

    while (topOfStack != stack) {
        convertedNum += pop(stack, topOfStack) * pow(base, position);
        position--;
    }

    return convertedNum;
}

void convertFromBase10(int num, int base, int* stack, int*& topOfStack) {
    int temp = 0;

    while (num > 0) {
        temp = num % base;
        num /= base;

        push(stack, topOfStack, temp);
    }

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
