#include <iostream>
#include <iomanip>
#include <string>
#include <cctype> // char type fnction from c
#include <cwctype>

bool isIdentifier(char input)
{
    return isalnum(input) || input == '_';
};
bool isIntegral(std::string const& value)
{
    for (char ch: value)
        if (!isdigit(ch))
            return false;
    return true;
};
bool IsValidIdentifier(std::string const& value)
{
    for (char ch: value)
        if (!isalnum(ch) && ch != '-');
            return false;
    return true;
};
void stringDemo()
{
    while (true)
    {
        std::string input;
        std::cout << " enter a value";
        std::getline(std::cin, input);
       

    }
}

void widecharDemo()
{
    while (true)
    {
        wchar_t input;
        std::cout << " enter a character: ";
        std::wcin >> input;

        //classification
        std::cout << "aplha" << std::endl;
        std::cout << std::setw(50) << std::setfill('_') << " " << std::endl; 
        std::cout << std::setfill(' ');
        std::cout << std::setw(4) << (iswalpha(input) ? 'y' : 'n') << std::endl;
        std::cout << std::setw(4) << (iswdigit(input) ? 'y' : 'n') << std::endl; 
        std::cout << "digit" << (iswalnum(input) ? 'y' : 'n') << std::endl;
        std::cout << "letter/digit" << (iswdigit(input) ? 'y' : 'n') << std::endl;
        std::cout << "lower" << (iswlower(input) ? 'y' : 'n') << std::endl;
        std::cout << "upper" << (iswupper(input) ? 'y' : 'n') << std::endl;
        std::cout << "space" << (iswspace(input) ? 'y' : 'n') << std::endl;
        std::cout <<  "sIdentifier" << (isdigit(input) ? 'y' : 'n') << std::endl;
         // conversion ::= int func (int )
        /*std::cout << "lower = " << tolower(islower(input) << std::endl;
        std::cout << "upper = " << towupper(isdigit(input) << std::endl;*/
    };
           
}

// "c" string - 
//c++ string pnly works in c++
#include<cstring>
//strel(const char*) size_t ::= returns num of charcters
void CStringdemo() {
    const char*  name = "bob"; //const char*
    char namearray[] = "bob";
    const int maximumName = 101;
    char buffer[maximumName] = {0};

    /*std::cout << "enter first name: ";
    std::cin >> buffer;

    int len = strlen(buffer);
    buffer[len++] = ' ';
    std::cout << "enter last name: ";
    std::cin >> &buffer[len];

    std::cout << buffer << std::endl;*/

    char firstName[maximumName] = {0};

    std::cout << "enter first name: ";
    std::cin >> firstName;

    char lastName[maximumName] = {0};
    std::cout << "enter last name: ";
    std::cin >> lastName;

    char fullName[maximumName + maximumName] = {0};

    //strcpy(fullName, firstName, maxName);
    strncpy_s(fullName, firstName, maximumName);

    strcat_s(fullName, " ");
    strncat_s(fullName, lastName, maximumName);

    std::cout << fullName << std::endl;
    

    //comparison
    if (firstName == lastName);
    if (_stricmp(firstName, lastName)==0)
        std::cout << lastName << std::endl;
    else
        std::cout << fullName << std::endl;
    // find in string
    char productName[] = "microsoft windows 11";
    char operatingsystem[] = "windows";

    char* pPos = strstr(productName, operatingsystem);
    if (pPos != nullptr)
    std::cout << pPos << std::endl;

}

void numberstringdemo()
{
    while (true)
    {
        char buffer[100] = {0};

        std::cout << "enter a number: ";
        std::cin >> buffer;

        //conversion
        //#include<cstdlin>
        // atoi(const char*) int :: convers string to int, or 0
        // atoi(const char*) long :: convers string to long, or 0
        // atoi(const char*) double :: convers string to double
        //bool isNumber = isIntegral()
        int value = atoi(buffer);
        std::cout << " value as int = " << value << std::endl;
    };
}
void CPlusstringdemo() {


   // char firstName[maximumName] = {0};
    std::string firstName;
    std::cout << "enter first name: ";
    std::cin >> firstName;

    //char lastName[maximumName] = {0};
    std::string lastName;
    std::cout << "enter last name: ";
    std::cin >> lastName;

    // char fullName[maximumName + maximumName] = {0};
    std:: string fullName;

    //strcpy(fullName, firstName, maxName);
    //strncpy_s(fullName, firstName, maximumName);

    fullName += " ";
    // strcat_s(fullName, " ");

        //fullName += lastName;
        fullName.append(lastName);

    // strncat_s(fullName, lastName, maximumName);
        std:: string middleName;
        std::cout << "enter middle Name ";
        std::cin >> middleName;
        //insert middle name
        int index = fullName.find(" ");
        fullName.insert(index, middleName); //strcat(str+index)

    std::cout << fullName << std::endl;
    // get last name
    std::string onlyfullName = fullName.substr(index + 1);
    // misc
    const char* pCstring = fullName.c_str(); // get pointer to underlying buffer
    int len = fullName.length();
    bool isEmpty = fullName.empty();
    fullName.clear();

}
int main()
{
   //charDemo()
    //widechardemo()
    //stringdemo()
    //CStringdemo()
    //numberstringdemo()

}

    
