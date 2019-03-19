/*
 *        File: arrays.cc
 *      Author: Tyler Ebert
 *        Date: March 18, 2019
 * Description: Array example
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
int countEven(int numbers[], int size);
int arrayTotal(int numbers[], int size);

int main(int argc, char const *argv[]) {

    int numbers[8] = {3, 5, 19, 6, 7, 6, 55};
    int size = 7;
    printArray(numbers, size);
    
    int evens = countEven(numbers, size);
    cout << endl << "There are " << evens << " even numbers in the array." << endl << endl;

    int total = arrayTotal(numbers, size);
    cout << "The total of all values in the array is " << total << "." << endl << endl;

    return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

int countEven(int numbers[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] % 2 == 0){
            count++;
        }
    }
    
    return count;
}

int arrayTotal(int numbers[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += numbers[i];
    }

    return total;
}


/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 */
