#include <iostream>

int main() {
     
    int intVal = 10;
    double doubleVal = intVal;   

    
    double anotherDouble = 9.78;
    int convertedInt = (int)anotherDouble;    

    
    std::cout << "Implicit Conversion:" << std::endl;
    std::cout << "Integer value: " << intVal << std::endl;
    std::cout << "Converted to double (implicitly): " << doubleVal << std::endl;

    std::cout << "\nExplicit Conversion:" << std::endl;
    std::cout << "Double value: " << anotherDouble << std::endl;
    std::cout << "Converted to int (explicitly): " << convertedInt << std::endl;

    return 0;
}

