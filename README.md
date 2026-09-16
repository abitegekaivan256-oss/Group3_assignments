//Mode calculator

// Task requirements

Create a simple C++ program that lets the user enter a collection of numerical values and outputs the mode in the data set.

// Implementation strategy

The program first asks for the number of values to enter. It records each value and its frequency in a 'map' It then finds the highest frequency and prints every value with that frequency.

// Key decisions and approaches

- 'double' is used so both whole numbers and decimal values are supported.
- A 'map' keeps the code short and automatically stores the results in numerical order.
- If every value occurs only once, the program reports that there is no mode.
- If multiple values share the highest frequency, all of them are shown.

// Testing

The program was checked with:

- one mode;
- more than one mode;
- values containing decimals; and
- a data set with no repeated values.

// Working example

Input:

How many values would you like to enter? 6
Enter 6 values:
4 7 4 2 7 4


Output:

Mode(s): 4
Frequency: 3






