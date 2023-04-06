#include <iostream>
#include <fstream>
#include<string>
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

int main() {
    // Declare an array of Person objects
    Person people[3] = {
       Person("John", 20),
       Person("Alice", 25),
       Person("Bob", 30)
    };
    int size = 3;

    // Open the file for writing
    ofstream outFile("people.txt");

    // Write the object data to the file
    for (int i = 0; i < size; i++) {
        outFile << people[i].getName() << " " << people[i].getAge() << endl;
    }

    // Close the file
    outFile.close();

    while (true)
    {

        // Open the file for reading
        string a;
        cin >> a;
        ifstream inFile("people.txt");

        // Read the object data from the file

        string name;
        int age;
        while (inFile >> name >> age) {
            Person p(name, age);
            if (a == p.getName()) {
                cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;
            }
        }

        // Close the file
        inFile.close();
    }
    return 0;
}
