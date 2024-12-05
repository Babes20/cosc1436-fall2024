#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 


std::string getfilename(const char* message)
{
    std::cout << message;
    std::string filename;
    std::getline(std::cin, filename);
    return filename;
};

void encrypt(std::fstream& input, std::fstream& output, char key)
{
    while (!input.eof())
    {
        char ch;
        input.get(ch);
        ch += key;
        output.put(ch);
    };
};
int main()
{
    // input and output files
    std::string inputfilename = getfilename(" enter input file: ");
    std::string outputfilename = getfilename(" enter output file: ");

    //  input and output writing

    std::fstream inputfile;
    inputfile.open(inputfilename, std::ios_base::in);
        std::fstream outputfile;
        outputfile.open(outputfilename, std::ios_base::out | std::ios_base:: binary  |std::ios_base::trunc);
        encrypt(inputfile, outputfile, 56);

}

