#include <iostream>

int main() {
     
    int a = 5;
    double b = a;   
    std::cout << "Implicit Casting (int to double): " << b << std::endl;

     
    double x = 9.99;
    int y = (int)x;   
    std::cout << "Explicit Casting (double to int using C-style): " << y << std::endl;

    
    float f = 3.14;
    int i = static_cast<int>(f);   
    std::cout << "Explicit Casting (float to int using static_cast): " << i << std::endl;

   
    char ch = 'A';
    int ascii = ch;
    std::cout << "Char to int (ASCII of '" << ch << "'): " << ascii << std::endl;

    
    int code = 66;
    char letter = static_cast<char>(code);
    std::cout << "Int to char (66 as char): " << letter << std::endl;

    return 0;
}

