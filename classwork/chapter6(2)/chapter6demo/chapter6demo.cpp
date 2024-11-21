#include <iomanip>
#include <string>
#include <iostream>
 
// function overloading 2 or more function have the same name and different

/// @brief reads an integer
/// @param message message to display
/// @return integral value provided by user
int ReadInt(std::string message)
{
    // Display message
    // get int value and return
    
    std::cout << message;
    int value;
    std::cin >> value;
}

int ReadInt(std::string message, int minValue, int maxValue); { ... }

    int value; 
    do
    {
        value = ReadInt(message);

        if (value < minValue  int value;
    ;

    return value;)
            std::cout << "value must be atleast " << minValue  << std::endl;

    } while (value < minValue);

    return value;
};
int ReadInt(std::string message, int minValue); { .... }

 
struct employee
{
    int Id;
    std::string Name;
    int Yearsofsertvice;
    double PayRate;

};

 void Display(employee& employeee)
 {
     
     void GivePayRaise(employee employee)
     {
         // ifyears > 3, payrate + $ 5
         // if years > 5, payrate + $10
          if(employee.yearsOfService > 3)
              employee rayerate += 5
          else if ( employee. YearsOfService > 5)
              employee. payrate += 10
     }
int main()
{
    /*int value = ReadInt("enter a value between 1 and 10:", 1, 10);

    int positive = ReadInt("enter a positive number: ", 0);
    
    int anyValue = ReadInt("enter a number: ");

        int test = ReadInt(" a message", 10, 50 ); */

    employee employee;
    employee.id = 10;
    employee.Name "Bob";
    employee.yearofservice = 10;
    employee.payRate = 20.5
        display employee 
        display employee



}