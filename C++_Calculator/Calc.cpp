#include<iostream>
#include<math.h>
#include "functions.h"
int main()
{
    std::cout<<"Please enter a number:\n";
    int num1;
    std::cin>> num1;
    std::cout<<"Please enter a second number:\n";
    int num2;
    std::cin>> num2;
    std::cout<<"What operation would you like to perform on the numbers?\n 1.Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division \n 5. Modulo\n";
    int option;
    std::cin>> option;
    // resuts var
    int sum;
    int difference;
    int product;
    int quotient;
    int modulo;
    switch (option)
    {
    case 1:
       sum= Addition(num1,num2);
       std::cout<<"The result is \n"<<sum <<"\n";
        break;
    
    case 2:
    difference= Subtraction(num1,num2);
    std:: cout<<"The result is \n"<<difference<<"\n";
    break;
    case 3: 
   product= Multiplication(num1,num2);
   std::cout<<"The result is "<<product<<"\n";
    break;
    case 4:
    quotient= Division(num1,num2);
    std::cout<<"The result is " <<quotient<<"\n";
    break;
    case 5: 
    modulo=Modulo(num1,num2);
    std::cout<<"The result is "<<modulo<<"\n";
    default:
    std::cout<<"\nCommand not recognized.\n Please try again\n";
        break;
    }
    return 0;
}
