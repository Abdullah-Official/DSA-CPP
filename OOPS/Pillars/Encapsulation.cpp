#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
    int setAge(int age)
    {
        this->age = age;
        return age;
    }
};

int main()
{

    Student abdullah;
    abdullah.setAge(22);
    cout << abdullah.getAge();

    return 0;
}