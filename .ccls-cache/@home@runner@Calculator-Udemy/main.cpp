#include <iostream>
using namespace std;
int main() {
  double var1, var2;

  beginning:

  system("clear");

  cout << "Enter first number: ";
  
  cin >> var1;
  
  cout << "Enter second number: ";
  
  cin >> var2;

  cout << "What do you want to do with your number? " << endl;

  cout << " + - add" << endl;

  cout << " - - subtract" << endl;

  cout << " * - multiply " << endl;

  cout << " / - divide " << endl;

  char decision ;

  cin >> decision ;

  system("clear");
  
  switch (decision)
    {
      //ADDITION
      
      case '+':

      cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;

      break;
      
      //SUBTRACTION
      
      case '-':

      cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;

      break;

      //MULTIPLICATION

      case '*':

      cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;

      break;

      //DIVISION

      case '/':

        if(var2 != 0)

      cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;

        else 
          cout << "You cant divide by zero!";
        
      break;

      default:

      cout << " You entered the wrong character "; 

      }

 char decision2;

  cout << "Do you want to continue this program? (Y/N) " << endl;

  cin >> decision2; 

  if (decision2 == 'y' || decision2 == 'Y')
    goto beginning;

 
  

}
