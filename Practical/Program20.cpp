#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
  
    Person(string n, int a) : name(n), age(a) {}

   
    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Student : public Person {
private:
    string course;

public:
   
    Student(string n, int a, string c) : Person(n, a), course(c) {}

    void displayStudentInfo() {
        
        displayPersonInfo();
        cout << "Course: " << course << endl;
    }
};


class Teacher : public Person {
private:
    string subject;

public:
    
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    void displayTeacherInfo() {

        displayPersonInfo();
        cout << "Subject: " << subject << endl;
    }
};


int main() {
  
    Student s1("Alice", 20, "Computer Science");
    cout << "Student Information:" << endl;
    s1.displayStudentInfo();

    cout << "\n";

   
    Teacher t1("Mr. John", 45, "Mathematics");
    cout << "Teacher Information:" << endl;
    t1.displayTeacherInfo();

    return 0;
}