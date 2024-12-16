#include <cmath>     // abs, sqrt, pow
#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  srand(time(0));  // seeding our random number generator

  int user_input = 0;
  while (user_input != 99)
  {
    std::cout << "Welcome to C++ Calculator!  Choose an option below!\n"
              << "0. Roll a dice\n"        
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Square root\n"
              << "99. Quit\n> ";

    std::cin >> user_input;
    
    // implement calculator below
    if (user_input == 0)
    {
      int random_number = (rand() % 6) + 1;  // random numbers between 1 and 6
      std::cout << "You rolled a " << random_number << std::endl;
    }
    else
    {
      if (user_input == 1)
      {
        int x;
        int y;
        std::cout << "Enter two numbers\n";
        std::cin >> x >> y;
        std::cout << "Their sum is " << (x + y) << std::endl;
      }
    }
  }
  return 0;
}
