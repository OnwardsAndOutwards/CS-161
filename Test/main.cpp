#include <iostream>


using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;

        }

        bool hasHonors() {
            if (gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Dan", "CS", 3.5);
    Student student2("Cory", "Eng", 4.2);

    cout << student1.hasHonors();

    return 0;
}
