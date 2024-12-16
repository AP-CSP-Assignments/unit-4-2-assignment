# unit-4-1-assignment

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```

# C++ Variable and Operation Exercises
**Instructions:** For all exercises below, make variables to store the results and output them.  You are free to ask for user input for any problem.

## Exercise 1: Working with Integer and Double Types

1. **Create an `int` variable called `x` and initialize it to a value of 25.**  
   Create an `int` variable called `y` and initialize it to 3. 

2. **Perform the following operations and output the results:**
   - Add `x` and `y` together. What is the result?
   - Subtract `y` from `x`. Output the result.
   - Multiply `x` by `y`. Output the result.
   - Divide `x` by `y`. Output the result.
   - Use the modulus operator to find the remainder of `x` divided by `y`. Output the result.

3. **Create a new `int` variable `z` and initialize it to 10.**  
   Perform the following relational operations:
   - Is `x` greater than `z`? Make a `bool` variable to store the result, and output the result.
   - Is `y` less than `x`? Make a `bool` variable to store the result, and output the result.

## Exercise 2: Working with Boolean Variables

1. **Create two boolean variables**:  
   - `isSunny` and `hasUmbrella`.  
   Initialize `isSunny` to `true` and `hasUmbrella` to `false`.

2. **Perform the following boolean operations and output the results:**
   - Check if it is both sunny and you have an umbrella (`isSunny && hasUmbrella`).
   - Check if it is either sunny or you have an umbrella (`isSunny || hasUmbrella`).
   - Check if it is not sunny (`!isSunny`).
   - Check if it is not sunny and you don't have an umbrella (`!isSunny && !hasUmbrella`).
   - Output all results.

## Exercise 3: Mixing Relational and Boolean Logic

1. **Create three new variables:**
   - An `int` variable `n` initialized to 7.
   - A `double` variable `m` initialized to 4.0.
   - A `bool` variable `hasLicense` initialized to `false`.

2. **Perform the following operations and output the results:**
   - Check if `n` is greater than `m`. Make a `bool` variable to store the result, and output the result.
   - Check if `m` is equal to `4.0`. Make a `bool` variable to store the result, and output the result.
   - Check if both `hasLicense` is `true` and `m` is less than or equal to `n`. Make a `bool` variable to store the result, and output the result.
   - Use `&&` to check if both `n` is greater than `5` and `hasLicense` is `false`. Make a `bool` variable to store the result, and output the result.

## Exercise 4: String and Numeric Operations

1. **Create the following variables:**
   - A `std::string` variable `firstName` initialized to `"John"`.
   - A `std::string` variable `lastName` initialized to `"Doe"`.
   - A `double` variable `score` initialized to `85.75`.

2. **Perform the following operations and output the results:**
   - Print out the name of the person as `"Doe, John"`.
   - Print the message `"Your score is: "` with the `score` value and output the result.

## Exercise 6: Using Variables in a Real-World Scenario

1. **Create the following variables:**
   - An `int` variable `age` initialized to 18.
   - A `double` variable `height` initialized to 5.9 (representing height in feet).
   - A `bool` variable `isStudent` initialized to `true`.
   - A `std::string` variable `city` initialized to `"New York"`.

2. **Perform the following operations and output the results:**
   - Calculate the year you were born (assuming the current year is 2024) and output it.
   - Check if you are considered an adult (age >= 18) and output the result as `true` or `false`.
   - Calculate if your height is over 6 feet (height > 6). Output the result as `true` or `false`.
   - Use boolean operations to check if you are both a student and living in New York. Output the result as `true` or `false`.

## Bonus Challenge: Compound Expressions

1. **Create the following variables:**
   - An `int` variable `i` initialized to 50.
   - A `double` variable `d` initialized to 100.5.
   - A `bool` variable `flag` initialized to `false`.

2. **Perform the following compound expressions and output the results:**
   - Check if `i` is divisible by 5 **and** `d` is greater than 50. Output the result as `true` or `false`.
   - Check if `d` is less than or equal to 100 **or** `flag` is `true`. Output the result as `true` or `false`.
   - Check if the negation of `flag` is true **and** `i` is greater than 30. Output the result as `true` or `false`.

# Sample Solutions
```c++
#include <iostream>
#include <string>

int main() {

    // Exercise 1: Working with Integer and Double Types
    int x = 25;
    int y = 3;

    // Operations
    std::cout << "Exercise 1:" << std::endl;
    std::cout << "x + y = " << x + y << std::endl;
    std::cout << "x - y = " << x - y << std::endl;
    std::cout << "x * y = " << x * y << std::endl;
    std::cout << "x / y = " << x / y << std::endl;
    std::cout << "x % y = " << x % y << std::endl;

    int z = 10;
    std::cout << "x > z: " << (x > z) << std::endl;
    std::cout << "y < x: " << (y < x) << std::endl;

    std::cout << std::endl;

    // Exercise 2: Working with Boolean Variables
    bool isSunny = true;
    bool hasUmbrella = false;

    std::cout << "Exercise 2:" << std::endl;
    std::cout << "isSunny && hasUmbrella: " << (isSunny && hasUmbrella) << std::endl;
    std::cout << "isSunny || hasUmbrella: " << (isSunny || hasUmbrella) << std::endl;
    std::cout << "!isSunny: " << (!isSunny) << std::endl;
    std::cout << "!isSunny && !hasUmbrella: " << (!isSunny && !hasUmbrella) << std::endl;

    std::cout << std::endl;

    // Exercise 3: Mixing Relational and Boolean Logic
    int n = 7;
    double m = 4.0;
    bool hasLicense = false;

    std::cout << "Exercise 4:" << std::endl;
    std::cout << "n > m: " << (n > m) << std::endl;
    std::cout << "m == 4.0: " << (m == 4.0) << std::endl;
    std::cout << "hasLicense && m <= n: " << (hasLicense && m <= n) << std::endl;
    std::cout << "n > 5 && hasLicense == false: " << (n > 5 && !hasLicense) << std::endl;

    std::cout << std::endl;

    // Exercise 5: String and Numeric Operations
    std::string firstName = "John";
    std::string lastName = "Doe";
    double score = 85.75;

    std::cout << "Exercise 5:" << std::endl;
    std::string fullName = lastName + ", " + firstName;
    std::cout << "Full Name: " << fullName << std::endl;

    std::cout << "Your score is: " << score << std::endl;

    std::cout << std::endl;

    // Exercise 6: Using Variables in a Real-World Scenario
    int age = 18;
    double height = 5.9;
    bool isStudent = true;
    std::string city = "New York";

    std::cout << "Exercise 6:" << std::endl;
    std::cout << "Year of birth: " << 2024 - age << std::endl;

    std::cout << "Is adult: " << (age >= 18) << std::endl;
    std::cout << "Is height > 6 feet: " << (height > 6) << std::endl;

    std::cout << "Is student and lives in New York: " << (isStudent && city == "New York") << std::endl;

    std::cout << std::endl;

    // Bonus Challenge: Compound Expressions
    int i = 50;
    double d = 100.5;
    bool flag = false;

    std::cout << "Bonus Challenge:" << std::endl;
    std::cout << "i % 5 == 0 && d > 50: " << (i % 5 == 0 && d > 50) << std::endl;
    std::cout << "d <= 100 || flag == true: " << (d <= 100 || flag == true) << std::endl;
    std::cout << "!flag && i > 30: " << (!flag && i > 30) << std::endl;

    return 0;
}
```
