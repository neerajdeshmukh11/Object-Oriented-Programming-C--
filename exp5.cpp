#include <iostream>
#include <string>

class Stud {
private:
    std::string name;
    int age;
    std::string department;

public:
    Stud() {
        name = "Unknown";
        age = 0;
        department = "Unknown";
        std::cout << "Default Constructor called\n";
    }

    Stud(const std::string &n, int a, const std::string &d) {
        name = n;
        age = a;
        department = d;
        std::cout << "Multiple Constructor called\n";
    }

    Stud(const Stud &s) {
        name = s.name;
        age = s.age;
        department = s.department;
        std::cout << "Copy Constructor called\n";
    }

    Stud(const std::string &n) {
        name = n;
        age = 0;
        department = "Unknown";
        std::cout << "Overloaded Constructor called\n";
    }

    ~Stud() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    Stud student1;
    student1.display();
    std::cout << std::endl;

    Stud student2("John Doe", 20, "Computer Science");
    student2.display();
    std::cout << std::endl;

    Stud student3 = student2;
    student3.display();
    std::cout << std::endl;

    Stud student4("Jane Smith");
    student4.display();
    std::cout << std::endl;

    return 0;
}
