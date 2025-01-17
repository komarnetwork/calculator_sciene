#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>
using namespace std;

void clearScreen()
{
#ifdef _WIN32
  system("cls"); // Untuk Windows
#else
  system("clear"); // Untuk Linux/Unix/Mac
#endif
}

void displayMenu() {
  cout << endl;
  cout << "********************************* Calculator *******************************\n";
  cout << "-----------------------------------------------------------------------------\n";
  cout << "Operations\t" << "\tTrigonometric Functions" << "\t\tLogarithmic Functions\n";
  cout << "-----------------------------------------------------------------------------\n";
  cout << "1: Division\t\t" << "7: Sin\t\t" << "\t\t13: Log" << endl;
  cout << "2: Multiplication\t" << "8: Cos\t\t" << "\t\t14: Log with base 10" << endl;
  cout << "3: Subtraction\t\t" << "9: Tan\t\t" << "\t\t15: Exit" << endl;
  cout << "4: Addition\t\t" << "10: Inverse of Sin" << endl;
  cout << "5: Exponent\t\t" << "11: Inverse of Cos" << endl;
  cout << "6: Square root\t\t" << "12: Inverse of Tan" << endl;
  cout << "-----------------------------------------------------------------------------\n";
}

int main()
{
  float a, b, po;
  int c;
  po = M_PI / 180;
  
  displayMenu();

  while (true)
  {
    cout << "Enter the function that you want to perform : ";
    cin >> c;
    
    switch (c)
    {
    case 1:
      cout << "Enter 1st number : ";
      cin >> a;
      cout << "Enter 2nd number : ";
      cin >> b;
      cout << "Division = " << a / b << endl;
      break;
    case 2:
      cout << "Enter 1st number : ";
      cin >> a;
      cout << "Enter 2nd number : ";
      cin >> b;
      cout << "Multiplication = " << a * b << endl;
      break;
    case 3:
      cout << "Enter 1st number : ";
      cin >> a;
      cout << "Enter 2nd number : ";
      cin >> b;
      cout << "Subtraction = " << a - b << endl;
      break;
    case 4:
      cout << "Enter 1st number : ";
      cin >> a;
      cout << "Enter 2nd number : ";
      cin >> b;
      cout << "Addition = " << a + b << endl; 
      break;
    case 5:
      cout << "Enter the number : ";
      cin >> a;
      cout << "Enter the exponent : ";
      cin >> b;
      cout << "Exponent = " << pow(a, b) << endl; 
      break;
    case 6:
      cout << "Enter the number : ";
      cin >> a;
      cout << "Square Root = " << sqrt(a) << endl; 
      break;
    case 7:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Sin = " << sin(a) << endl; 
      break;
    case 8:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Cos = " << cos(a) << endl; 
      break;
    case 9:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Tan = " << tan(a) << endl; 
      break;
    case 10:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Inverse of Sin = " << asin(a) << endl; 
      break;
    case 11:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Inverse of Cos = " << acos(a) << endl; 
      break;
    case 12:
      cout << "Enter the degree : ";
      cin >> a;
      a = a * po;
      cout << "Inverse of tan = " << atan(a) << endl; 
      break;
    case 13:
      cout << "Enter the number : ";
      cin >> a;
      cout << "Log = " << log(a) << endl; 
      break;
    case 14:
      cout << "Enter the number : ";
      cin >> a;
      cout << "Log with base 10 = " << log10(a) << endl; 
      break;
    case 15:
    cout << "Terimakasih telah menggunakan program ini" << endl;
    return 0;
    break;
    default:
      cout << "Wrong Input" << endl;
    }

    this_thread::sleep_for(std::chrono::seconds(3));
    clearScreen();
    displayMenu();
  }
  
}
