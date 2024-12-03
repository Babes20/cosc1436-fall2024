#include <iostream>
#include<fstream>
#include <string>
#include <sstream>

std::fstream outFile;

    // open a file READ OR WRITE

outFile.open("log.txt", std::ios_base::out | std::ios_base::app); // opening a file for writing

std::string line;
std::cout << "enter the file contents: ";

while (true)
{
    getline(std::cin, line);
    if (line == "Q" || line == "q")
        break;

    // write to file
    outFile << line << std::endl;

};

}

void ReadFileDemo();
{
    std::fstream infile;
    infile.open("log.txt", std::ios_base::in);

    while (infileof(();
    {
        std::string line;
        getline(infile, line)
            std::cout << line << std::endl;
    };
}
void display(std::fstream output, std::string message)
{
    output << message;
    std::cout << message;
}
void logOutPutDemo();

std::fstream logfile;
logfile.open("output.txt", std::ios_base::out | std::ios_base::app);

display(logfile, "enter your name: \n";
std::string name;
getline(std::cin, name);
std::cout << " hello " << name std::endl;

std::stringstream msg
msg << "hello " << name std::endl;
display(logfile));

// std::cout << "hello " << name std::endl;
//display(logfile, "hello ");
//display(logfile, name);
//display(logfile, "\n

int main()
{
    ReadFileDemo();
    logOutPutDemo();
}

