#include <iostream>
#include <iomanip>
#include <string>

void stackdemo()
{
    double localdouble = 45.6;
    //Declare a pointer to a double
    // pointer is always a memory address
    // poniter is always either 4 or 8 bytes long
    // pointer value is always ingeral value

    // address-of :: & variable
    // the type of expression is T* where T is the type of the variable
    double* ptrdouble = &localdouble; // pointer to double

    // assign new value to value at memory address
    *ptrdouble = 89.7;

    // type of coercion dont behave

    int localInt = 56;
    localdouble = localInt;

    // Dereferencing a pointer
    // dereferencing-op :: *E
    // type of expression is T where E is T*

    std::cout << ptrdouble << " " << *ptrdouble << std::endl;
    std::cout << (*ptrdouble == localdouble) << std::endl;
};

void Emptydemo()
{
    float payrate = 12.50;

    // always init to 0 or valid memory 

    // float* pPayrate = NULL;
    float* pPayrate = nullptr; // c++ recommended
    // print value and deference value
    // coressponding delete

    std::cout << pPayrate << "=";
    // always vverify pointer before deferencing 
    // if (ptr != nullptr)
    // if ptr
    // if (pPayrate!= nullptr)

    if (pPayrate)
        std::cout << *pPayrate;
    std::cout << std::endl;
}

struct Employee
{
    int Id;

    std::string name;

    int DumyValues[1000];
};
void DynamicMemoryDemo()
{
    const int MaxEmployees = 100;
    Employee* employee[MaxEmployees] = {0};
    int id = 1000;

    //int numberOfEmployes = 0;
    for (int index = 0; index < MaxEmployees; ++index)
        std::string name;
    std::cout << "enter name or empty to quit: ";
    //std::getlined(std::cin, name);

    // if (name == "")

       //  break;

    // add array 
    // new-op :: new T; returns T*

    /*Employee* employee = new Employee;
    employee->Id = ++id;
    employee->name = name;
        employees[index] = employee;*/
    //++numberOfEmployes;
};

// print employees 

//for (int index = 0; index << numberOfEmployes; ++index)

{
    if (employees[index == nullptr)

        break;

    std::cout << "[" << employees[index]->Id << "]" << employees[index->name << std::endl;
};

// ensure that any memory allocated by new is cleaned up using delete'
// delete-op :: = delete E;
// pointers can be passed as aparameter

for (int index = 0; index << numberOfEmployes; ++index)
{
    if (employees[index == nullptr)
        break;
    // delete 
    employee* employee = employees[index];
    delete employees;
    delete employees[index] = nullptr;

    //delete &index; // this is bad
};

void displayintarray(int* arr, int size) {

    for (int index = 0; index < 100; ++index)
        std::cout << arr[index] << " ";
    std::cout << std::endl;



};
    void arraypointdemo()
    {
        int values[100];
        // array variable are pointers
        int* ptrvalues = values;
        for (int index = 0; index < 100; ++index)
        {
            // pointer arithemetic
            // // add/sub
            // // value is always miltiplied by thr size(T) so youa re ref a whole element
            // arr[index] = * arr + index
            *(ptrvalues + index) = index + 1;
        };

   /* for (int index = 0; index < 100; ++index;
         value[index] = index +1 */
    (ptrvalues, 100);
    int localvariable = 100;
    (&localvariable, 1);
    }
    
        int value[100];
        for (int index = 0; index < 100; ++ index) 
    };

    

    void newarraydemo()
    {
        double arr[100];
// dynamically allocate array at runtime
        int size;
        cout << "how many element: ";
        std::cin >> size;

        // array decl wont worl=k at runtime 
        // new T[size]
        // size must be integral > 0

        double* arr = new double[size];





        void newarraydemo()
        {
            while (true)
            {
                newarraydemo();
                std::wcout << "keep going(y / n) " ?
                    char choice;
                std::cin >> choice

                    if choice == 'n' || choice == 'n')
                    break;
            };
        };
        // EMPLOEE is pass by value id by 

        void intializeEmployee(int* employee)
        {
            // validate pointer 
            if (employee) // employee != nullptr 

            {
                //employee++
                // no need to validate
                stdcout :: << " enter the employee Id";
                std::getline(std::cin, employee.name);
                std::cin >> employee;
            };
            void passbyrefvspointerdemo()
            {
                //Employee employee;
                int employeeId;
                // pass by ref - must pass a variable
                intializeemployeebyref(employeeId);
                // pass by employee address of variable
                intializeemployeebyptr(&employeeId)
                    intializeemployeebyptr(nulllptr);

            };


            Employee* createEmployee()
            {
                employee* ptremployee = new employee();
                return ptremployee;

            }
            int* findelement(int values[], ibt size, int desiredValue)
                for (int index = 0, index < size, index++)
                    if (value[index] == desiredValue)
                        return &value[index];
        };

        return nullptr;
    }
    double getconstant()
    {
        return &g_someVariables;

    }
    // 
    double* dontdoThis()
        double somevalue = 50;
        void pointerreturndemo()
        {
            // pointer as return type 
            // new instance from function 
           /* Employee* pNewEmployee = createEmployee();
            delete pNewEmployee

                int value[100] = {0};
            values[50] = 20;
            int* pmatch = findElement(value 100, 50)*/

                // refrence for const string
            //    const std::string&
            //    int readInt(std::string const& message)

            //    //const, cant modify
            //    std::cout << message;
            //int value;
            //std:: cin >> value;
            //return value;

            //void constantpointersdemo()
            //{
                //std::string nessage ="enter a number"
                //int value = readint"enter a number";

                //// non-const vs const
                //int nonconstvalue = 10;
                //const int  constvalue = 20;

                //    nonconstvalue = 20;

                //    // pointer cab be deferenced 
                //    int* pnonconst = &nonconstvalue;
                //    pnonconst = 40;

                //    // cant assign a const int to int

                //    pnonconst = &constvalue;
                //    *pnonconst = 50;

                    // nnnon- const to const is allowed
                    // cant not take away const from something
                   /* int const* pconst = &constvalue;
                    pconst = &nonconst

                        nonConstValue = (int)45.6;
                    nonconstvalue = static_cast<int>(45.6);

                    pconst = const_cast<int*>(*nonconstvalue)
                        pnonconst = const_cast<int*>(&constvalue = )
                        pnonconst = 50;*/

    int main()
    {

        //stackdemo();
        //Emptydemo();
        //DynamicMemoryDemo();
        //arraypointdemo();
       // DynamicMemoryDemo();
        // pointerreturndemo();
    
 


