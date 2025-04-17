#include <iostream>
using namespace std;

class Calculator {
public:
     
    float add(float a, float b) {
        return a + b;
    }

 
    float subtract(float a, float b) {
        return a - b;
    }

    
    float multiply(float a, float b) {
        return a * b;
    }

    
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    float num1, num2;
    int choice;
    Calculator calc;  

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

 
    cout << "\nChoose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    float result;

     
    switch (choice) {
        case 1:
            result = calc.add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = calc.subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = calc.multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = calc.divide(num1, num2);
            if (num2 != 0)   
                cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

