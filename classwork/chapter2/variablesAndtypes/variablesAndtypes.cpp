#include <iostream>
#include <string>

    //declares a point as an X and Y value
    struct point
    {
        //delclare variables - field
        int X;
        int y;
    };
    struct point2
    {
        int x;
        int y;
    };
    int main()

    {
    int name;
    //output a message
    std::cout << "hello world" << std::endl;
    // message 2 
    std::cout << "hello" << " " << "world" << std::endl;
    // message 3 
    std::cout << "hello";
    std::cout << " ";
    std::cout << "world";
    std::cout << std::endl;
    //message 4
    std::cout << "hello\tworld\n";
    std::cout << "hello \"bob\"";

    //file paths 
    std::cout << "c:\\windows\\temp";

    int length;
    length = 0;
    int releaseyear = 1900;
    int rating = 3, stars = 5;

    std::cout << length;
    //string stuff
    // not a perimitive
    // does not work outside c++
    

    std::string message = "Hello";
    message = message + "world ";
    message = message + " " "+" "name";

    std::string empty;
    empty = empty + "Hello";
    //combition oprator
    // v op= E
    empty += "world"; // empty = empty + "world";

    // C++ is strongly typed
    int number = 10;
     //number = "20"; // compiler error, cannot change type of variable
     //type inferencing
     // auto ::= complier figures it out 
    // only usable in variable decls and a few other places
     //must use an init expression when declaring the variables
    auto payRate = 45.6; // doube payrate 45.6;
     //payRate = "45.6";
    double  AvaragepayRate = 40 / payRate;
    //Area of a circle = PI*r2
    double pi = 3.14159;
    double radius = 10;
    //constant expression = expression that is calculate at compile time, primitive
    // // 4+5*8=44
    // variables are better at reuse but may be accidently changed
    // literals are great unless you need them everywhere(constant expressiom)
    // const (constant expression ) with name type and value and read only, premitives
    double area = 3.14159 * radius * radius;
    area = pi * radius * radius;
    //Pi = 10; // error

    //struct variables are undefined
    // cannot use structs with cut
    //structure - a group of related data points
    //prompt user for a point 
    // int x, y;
    //point pt;
    point pt {0}; //zero int fields

    std::cout << "enter x value:";
    pt.X = 5;

    std::cout << "enter y value:";
   pt.y = 10;


}