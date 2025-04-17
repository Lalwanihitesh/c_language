#include <iostream>
#include <string>
using namespace std;

 
class Person {
protected:
    string name;
    int age;

public:
     
    Person(string n, int a) : name(n), age(a) {}

   
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

 
class Student : public Person {
private:
    string studentID;

public:
    
    Student(string n, int a, string id) : Person(n, a), studentID(id) {}

    
    void displayStudentInfo() {
        displayPersonInfo();  
        cout << "Student ID: " << studentID << endl;
    }
};

 
class Teacher : public Person {
private:
    string subject;

public:
    
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}
 
    void displayTeacherInfo() {
        displayPersonInfo();  
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    
    Student student("Alice", 20, "S12345");
    cout << "Student Info:" << endl;
    student.displayStudentInfo();
    cout << endl;

    
    Teacher teacher("Mr. Smith", 45, "Mathematics");
    cout << "Teacher Info:" << endl;
    teacher.displayTeacherInfo();
    cout << endl;

    return 0;
}

