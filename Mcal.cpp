#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
  // Variables
  int user_choice;
  long double a;
  long double b;
  long double sum;

  std::cout << std::endl;

  // Display welcome message
  std::cout << "Welcome to Mcal! by Mayank Biswas" << std::endl;

  // Display menu options
  std::cout << "\nChoose your operation:" << std::endl;
  std::cout << "\nNormal Operations:\nAdd = 1, Subtraction = 2, Division = 3, "
               "Multiplication = 4" << std::endl;
  std::cout << "\nExtras:\nPower = 5, Round = 6, Square root = 7, Absolute value = 8"
            << std::endl;

  // Get user choice
  std::cout << "\nEnter your choice: ";
  std::cin >> user_choice;

  // Operations
  switch (user_choice) {
    case 1: {
      std::cout << "\nAddition";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      std::cout << "\nEnter another number (b =): ";
      std::cin >> b;

      sum = a + b;
      std::cout << "\nCalculating -> " << a << " + " << b << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 2: {
      std::cout << "\nSubtraction";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      std::cout << "\nEnter another number (b =): ";
      std::cin >> b;

      sum = a - b;
      std::cout << "\nCalculating -> " << a << " - " << b << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 3: {
      std::cout << "\nDivision";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      std::cout << "\nEnter another number (b =): ";
      std::cin >> b;

      if (b == 0) {
        std::cout << "Error: Division by zero is not possible!" << std::endl;
        return 0;
      }

      sum = a / b;
      std::cout << "\nCalculating -> " << a << " / " << b << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 4: {
      std::cout << "\nMultiplication";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      std::cout << "\nEnter another number (b =): ";
      std::cin >> b;

      sum = a * b;
      std::cout << "\nCalculating -> " << a << " x " << b << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 5: {
      std::cout << "\nPower";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter the base (b =): ";
      std::cin >> b;

      std::cout << "\nEnter the exponent (a =): ";
      std::cin >> a;

      sum = std::pow(b, a);
      std::cout << "\nCalculating -> " << b << " ^ " << a << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 6: {
      std::cout << "\nRound";

      std::cout << "\nEnter your numbers\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      std::cout << "\nEnter another number (b =): ";
      std::cin >> b;

      a = std::round(a);
      b = std::round(b);

      std::cout << "\nCalculating -> " << a << " rounded and " << b << " rounded "
                << std::endl;
      std::cout << "The answer is " << a << " and " << b << std::endl;
      break;
    }

    case 7: {
      std::cout << "\nSquare Root";

      std::cout << "\nEnter your number\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      sum = std::sqrt(a);
      std::cout << "\nCalculating -> sqrt(" << a << ")" << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    case 8: {
      std::cout << "\nAbsolute value";

      std::cout << "\nEnter your number\n";
      std::cout << "\nEnter a number (a =): ";
      std::cin >> a;

      sum = std::abs(a);
      std::cout << "\nCalculating -> |" << a << "|" << std::endl;
      std::cout << "The answer is " << sum << std::endl;
      break;
    }

    default: {
      std::cout << "Invalid option" << std::endl;
      break;
    }
  }

  // Footer
  std::cout << "\nThank you for using it! Have a great day!" << std::endl;
  std::cout << "Exiting!" << std::endl;

  return 0;
}

