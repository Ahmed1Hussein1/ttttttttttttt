#include <iostream>
#include <string> // for string class
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};
