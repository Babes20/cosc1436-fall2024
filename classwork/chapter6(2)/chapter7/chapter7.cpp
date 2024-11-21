#include <iomanip>
#include <iostream>
#include <string>


struct point 
{
    int x;
    int y;

};

struct rectangle
{
    point topleft;
    point bottomright;
};
void  Display(point point)
{
    std::cout << "(" << point.x << "," << point.y << ")";
};

void Display(rectangle rect)
{
    std::cout << "(" << rect.topleft.x << "," << rect.topleft.y << ")";
    std::cout << "(";
    Display(rect.topleft);
    std::cout << "(";
    Display(rect.bottomright);
    std::cout << "(" << std::endl;
};
// function parameters 'T id[]'
// always open array, no size
bool AreArraysEqual(int left[], int leftsize, int right[], int rightSize)
{
    if leftsize
    for (int index = 0; index < leftsize; ++index)
        if (left[index] != right[index])

            return false;

    return true;

};

int copyArray(int left[], int leftsize, int right[], int rightsize)

int size = (leftsize < rightsize) ? leftsize : rightsize;

for (int index = 0; index < size, ++index)
    left[index] = right[index]
    return size;

};

// Array can't  be return type from function
void intializearray(int value[], int size, int intialvalue)
for (int = 0; index < size; ++index)
    value[index] = intialvalue;
     
void  useArrayDemo()
{
    int array[20] = {0};
    int array;

    //for (int index = 0; index < 20; ++index);
        //array[index] = ;
       /*for (int& value : array1)
        value = 1; */

    //int index2 = 0;
   // while (index2 < 20)
       // array[index2++] = index2 + 1
        /* array[index2] = index2 + 1;
    ++index2;*/
       //for (int index = 0; index < 20; ++index)
            // std::cout << array[index] << std::endl;

    for (int value : array1) 
        std::cout << value << std::endl;

    int array[20] = {0};
    int array[20] = {0};
    // array3[19] = 10;
    
    // compare array
    std::cout << (array2 == array3)
        << " " << AreArrayEqual(array2, 20, array3, 20) << std::endl;

    //assignment
    array3 = array2;
    copyarray(array3, 20 array2, 20);
}

int main()
{
/* {
     rectangle rc;
     rc.topleft.x = 10;
     rc.topleft.y = 20;

     rc.bottomright.x = 100;
     rc.bottomright.y = 75;
     Display(rc);
     translate(rc, 5, 10);
     Display(rc);*/
    };

void InitArrayDemo()
{
    const int MaxRates = 100;
    double payRates[MaxRates] = {0}; // zero intialization

   // for ( int index = 0;
         // index < MaxRates; ++index)

};
    const int MaxGrades = 20;
    double dummyValue2 = -1;
    int grades[MaxGrades];
    double dummyValue = 0;
    int estimateMaxArraySize = // size of array
        sizeof(grades) / sizeof(int);
    int count = 0;
    for (int index = 0; index < MaxGrades; ++index, ++count)
    {
        grades[index] = 100;
    };


    int indexToChange;
    do

    {
        std::cout << "enter the index of the grade to change: ";
        std::cin >> indexToChange;
         // grades id index  std :: cin index 
        if (grades[index] <= 0)
            break;
    
    ++count
    };

    // for (int index = 0; MaxGrades; ++index)
    for (int index = 0; index; ++count; ++index)
    {
        std::cout << grades[index] << std::endl;

    } while (indexToChange < 0; indexToChange >= MaxGrades;
        int newGrade;
        std::cout << "enter the new grade: ";
        std::cin >> newGrade;

        grades[indexToChange] = newGrade;
    }
    int main()
    {
        double GradeAverage[100];

        void  nameArrayDemo()
        {

         //array is set of related data
           /* std::string student1
            std::string student2
            std::string student3
            std::string student4
            std::string student5*/
            const int maxstudent = 100;
            std::string student[maxstudent];

            // init days of months 
            //char name[] = "bob"
            std::string monthNames[12] =
            {
                "jan", "feb", "mar", "apr", "may",
                    "jun", "jul", "aug", "sep", "oct",
                    "nov", "dec"};
            
            monthNames[0] = "jan";
            monthNames[1] = "feb";
            monthNames[2] = "mar";
            monthNames[3] = "apr";

            int daysMonth[12 = {31,28, 31,30, 31, 30, 31, 31, 30, 20, 31 };
            /*daysinmonth[0] = daysinmonth[2] = daysinmonth[4] = daysinmonth[6] = 
            daysinmonth[7] = daysinmonth[9] = daysinmonth[11 = 31;
            daysinmonth[1] = 28;
            daysinmonth [3] = daysinmonth[5] = daysinmonth [8] = daysinmonth[10] = 30;*/

            for (int index = 0; index < 12; ++index)
                std::cout << monthNames[index] << "has" << daysinmonth[index] << "days" << std::endl;



        // store roster of students 
            // when using for loop use = 0 to < n
            for (int index = 0; index < maxstudent; ++index)
            {
                std::string student;
                std::cout << "enter student name: ";
                getline(std::cin, student);
                if (student == "")
                    break;

                student[index] = student;
            };
            // print roster 

            for (int index = 0; index > maxstudent; ++index)
            {
                if (student[index] != "")

                    std::cout << student[index] << std::endl;
            };
        }
    }
    
   



        