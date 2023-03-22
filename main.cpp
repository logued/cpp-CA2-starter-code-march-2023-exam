#include <iostream> // <<<  Starter Code for C++ CA1 March 2022  >>>
#include <cstdlib>
#include <ctime>
#include<sstream>
using namespace std;


// function prototypes
// ?

// Do NOT unnecessarily modify any code that is given to you.
// Write your solution directly under each TODO
// Test each task as you complete it to ensure that it is correct.

void question1() {  // Topic: Accessing array using Pointer Notation
    cout << "Question 1 - arrays and pointers" << endl;

    double array[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    //TODO  1a. Declare a pointer named 'ptr' and assign it
    //      to point at the array 'array'


    //TODO  1b. Write a for(){} loop that will output all elements in
    //      the array using POINTER NOTATION (NOT Array notation)
    //      by de-referencing the pointer.


    //TODO  1c. Output the size in bytes of the pointer 'ptr'


    //TODO 1d. Write code to calculate and output the number of elements in the
    //         array 'array' (i.e. Output the number of elements
    //         in the array 'array' without hard-coding the size)


    //TODO 1e. Set the pointer 'ptr' to point at the LAST array element
    //     and set the the last element using the pointer to 9.9


    //TODO 1f. Using a for(){} loop, iterate in reverse (right-to-left)
    //         through the elements, outputting each element using
    //         the pointer 'ptr' and pointer notation. (NOT array notation)

}

//////////////////////////  Question 2   ////////////////////////////

void question2() {  // dynamic memory allocation

    cout << "Question 2 - dynamic memory allocation" << endl;

    //TODO 2a ( apply good memory management practices below. )

    //TODO 2b.
    //      Dynamically allocate a block of memory to store an array of 100
    //      integer values. Declare a variable called "array" that will store
    //      the address of the array block.
    //      Using array notation, iterate over the array and assign each
    //      element with a random value in the range 1 to 100.
    //      (Code to generate random number is given below)

    int size = 100;                        // size of array - given



    // code to generate random number in a range
    // srand((unsigned) time(0));                // use current time to seed rand() - given
    // int randomNumber = (rand() % 100) + 1;    // IN RANGE 1 TO 100  - given


    //TODO  Q.2c
    //      Write a function average_array_notation() that accepts the array
    //      as a parameter, and iterates over the array to calculate and return
    //      the average of the EVEN values.  Output the returned average value.
    //      Use ARRAY Notation in your function.
    //      (Remember to use a function prototype if necessary)


    //TODO  Q.2d
    //      Write a function average_pointer_notation() that accepts the array
    //      as a parameter, and iterates over the array to calculate and return
    //      the average of the ODD values.  Output the returned average value.
    //      Use POINTER Notation and pointer arithmetic in your function.
    //      (Remember to use a function prototype if necessary)


}

// Q2.c  average_array_notation(...)


// Q2.d  average_pointer_notation(...)



////////////////////////Question 3 /////////////////////////////////

// Q3 requires a separate Track class to be created.


/////////////////////// Question 4 /////////////////////////////////

// Q4 requires a separate Track class to be created.


int main() {
    std::cout << "OOP Practical Examination - CA1 - March 2022" << std::endl;
    question1();
    question2();

    //TODO  code to demonstrate use of classes in  Q3 and Q4


    return 0;
}

