#include <iostream>
using namespace std;

 
int globalVar = 100;

void showLocalVariable() {
 
    int localVar = 50;
    
    cout << "Inside showLocalVariable function:" << endl;
    cout << "Local variable: " << localVar << endl;   
    cout << "Global variable: " << globalVar << endl;  
}

void showGlobalVariable() {
    cout << "\nInside showGlobalVariable function:" << endl;
    cout << "Global variable: " << globalVar << endl;   
    
     
}

int main() {
     
    int localVar = 20;
    
    cout << "Inside main function:" << endl;
    cout << "Local variable (main): " << localVar << endl;   
    cout << "Global variable: " << globalVar << endl;  
    
    showLocalVariable();   
    showGlobalVariable();   
    
    return 0;
}

