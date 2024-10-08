#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

//include the std namespace 

int main()
{
//getting input
    std::string name;
    std::cout << "enter your name: ";

    //std::cin >> v
    //inserts values up to first whitespace into variables
    //doesnt work with spaced strings
    //std::cin >> name;

    
    std::cin >> name;
    std::cout << "hello " << name << std::endl;
    int hours;
    std::cout << "how many hours did you work this week? ";
    std::cin >> hours;
    double payrate;
    std::cout << "how much do you earn an hour? ";
    std::cin >> payrate;

    std::cout << "you earned $" << (hours * payrate) << " this week" << std::endl;

    //multi-value input, values are whitespace separated
    int x, y;
    std::cout << "enter x,y values of a point: ";
    std::cin >> x >> y;
    
    //type coecrcion - compiler changes type of expression
    //no impact on runtime code generation
    // always safe
    //only impacts current expression
    //type hierarchy: larger of two operand types
    //double
    //float
    //unsigned long 
    //long
    //unsigned int 
    //int
    //char/short/unsigned short (automatic to int)


    // double = int 8 double
    //double = double * double (type coecrcion)
    //double = double
    double result = hours * payrate;
    
    //double + float * int => double
    //precedence rules dont apply, jjust find the largest type

    //assignment does not matter, type determined on each side of operator 
    //double = int * float

    //overflow and underflow
    short smallValue = 32767 + 1; //overflow
    std::cout << smallValue << std::endl;
    short largeValue = -32767 - 1; //underflow
    std::cout << largeValue << std::endl;

    float floatvalue = 1e38 + 1e2;
    std::cout << floatvalue << std::endl;

    //typecasting - you convert an expression to another type explicity
    int totalsales = 50000;
    int departments = 8;

    // static_cast<T>(E) => preferred
    // must be allowable
    // double averagesalesperdepartment = static_cast<double>(totalSales) / departments;
    double averagesalesperdepartment = totalsales / static_cast<double>(departments);
    averagesalesperdepartment = totalsales / (double)departments;


    //compiler error, cannot convert from string to int
    std::string somestring = "hello";
    //int somestringnumber = static_cast<int>(somestring);
    //int somestringnumber = (int)somestring;

    //use cast to truncated data w/o compiler warning
    int truncatedvalue = static_cast<int>(floatvalue);

    //math functions
    //pow(x, y) => x to the y power
    //sqrt(x) => square root of x
    //exp(x) =>e to the x power
    // log(x) => log of x log(exp(x)) =x
    //sin(x), cos(x), tan(x), cot(x), csc(x), ...h
    //abs(x) => positive value of x 
    //ceil(x)=> smallest possible int value>=x
    //floor(x) => largest possible int value <= x
    //trunc(x) => 
    //rounds

    double xvalue = 45.6;
    double mathresult;
    std::cout << pow(xvalue, 2); //xvalue * xvalue
    std::cout << sqrt(xvalue);

    std::cout << exp(2); // 3 nth power, e = 2.718
    std::cout << log(5.4); //root of e 

    std::cout << abs(-45); //positive x = 45

    std::cout << ceil(xvalue); //46
    std::cout << floor(xvalue); //45

    std::cout << trunc(xvalue); //45
    std::cout << round(xvalue); //46

    //formatted output
    std::cout << 4.567891241415151 << std::endl;
    std::cout << 5.67e3 << std::endl;

    //create a table
    // manipulator | behavior | persist
    //____________________
    //setw(i) | pads the value to o | no 
    //left | left justifies | yes
    // right | right justifies (default) \ yes
    //fixed | forces fixed point  notation | yes
    //setprecision(i) | sets precision of floats to total digits if !fixed and decimal digits if fixed | yes
    // setfill(c) | character to pad with | yes

    std::cout << std::left << std:: setw(8) << "student" << std::setw(6) << "grade" << std::setw(6) << "letter " << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::setfill(' ') std::end;
    // cout << fixed;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(8) << "bob " << std::setw(6) << 95.67 << "A " << std::setw(6) << std::endl;
    std::cout << std::setw(8) << "sue " << std::setw(6) << 98.543 << "A " << std::setw(6) << std::endl;
    std::cout << std::setw(8) <<  "jim " << std::setw(6)  << 84.567 << "B " << std::setw(6) << std::endl;
    std::cout << std::setw(8) << "jan " << std::setw(6)  << 78.987 << "c " << std::setw(6) << std::endl;

















}