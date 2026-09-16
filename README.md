//Harmonic Mean Calculator
//Task Requirements
The task is to write a C++ program that calculates the harmonic mean of different numbers entered by the user.

The program should:

- Ask the user to enter the number of values.
- Allow the user to enter the values one by one.
- Calculate the harmonic mean correctly.
- Display the final harmonic mean.
- Use simple and understandable C++ statements.

The formula for harmonic mean is:

Harmonic Mean = n / (1/x1 + 1/x2 + ... + 1/xn)

Where:

- n = total number of values
- x1, x2, ..., xn = the values entered by the user
//Implementation Strategy

The program follows these steps:

1. Ask the user to enter how many numbers they want to use.
2. Use a 'for' loop to receive each number.
3. For every number, calculate its reciprocal:

//Reciprocal = 1 / number

4. Add all the reciprocals together and store the result in 'sum'.
5. Calculate the harmonic mean using:

Harmonic Mean = n / sum

6. Display the result to the user.

The main calculation in the C++ program is:
sum = sum + (1 / number);
harmonicMean = n / sum;
//Key Decisions or Approaches
Use of 'double'

The program uses 'double' because the numbers and the final answer can contain decimal values.
double number;
double sum = 0;
double harmonicMean;
Use of a 'for' loop

A 'for' loop is used to allow the user to enter the required number of values.
for (int i = 1; i <= n; i++)

This avoids writing separate input statements for every number.
//Using a running sum

The program does not need to store all the numbers in an array. Instead, it adds each reciprocal directly to 'sum'.
sum = sum + (1 / number);
This keeps the program simple.
//How the Solution Was Tested

The program was tested using three values:

- First value = 2
- Second value = 4
- Third value = 8

Therefore:

n = 3

//Find the reciprocal of each value

For the first value:

1 / 2 = 0.5

For the second value:
1 / 4 = 0.25

For the third value:
1 / 8 = 0.125
Add the reciprocals
sum = 0.5 + 0.25 + 0.125
sum = 0.875
//Apply the harmonic mean formula

The formula is:
Harmonic Mean = n / sum

Substituting the values:
Harmonic Mean = 3 / 0.875
Therefore:
Harmonic Mean = 3.428571...

Rounded to two decimal places:

Harmonic Mean ≈ 3.43

The result from the program was **3.42857**, which agrees with the manual calculation.
//Working Example Including Inputs and Outputs
"the code was provided"

//Input
Enter the number of values: 3
Enter value 1: 2
Enter value 2: 4
Enter value 3: 8
//Output
The Harmonic Mean is: 3.42857
//Manual Calculation
Number of values (n) = 3

Values:
x1 = 2
x2 = 4
x3 = 8

Reciprocals:

1/x1 = 1/2 = 0.5
1/x2 = 1/4 = 0.25
1/x3 = 1/8 = 0.125

Sum of reciprocals:

0.5 + 0.25 + 0.125 = 0.875

Harmonic Mean:

HM = 3 / 0.875
HM = 3.42857
HM ≈ 3.43
