#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    virtual void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    void displayInfo() {
        cout << "Name: " << getName() << ", Age: " << getAge()
             << ", Employee ID: " << employeeID << endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    void setStudentID(int id) {
        studentID = id;
    }

    void displayInfo() {
        cout << "Name: " << getName() << ", Age: " << getAge()
             << ", Student ID: " << studentID << endl;
    }
};

int main() {
    Person p;
    Employee e;
    Student s;

    p.setName("Ali");
    p.setAge(30);
    p.displayInfo();

    e.setName("Sara");
    e.setAge(35);
    e.setEmployeeID(101);
    e.displayInfo();

    s.setName("Hamza");
    s.setAge(19);
    s.setStudentID(2501);
    s.displayInfo();

    return 0;
}