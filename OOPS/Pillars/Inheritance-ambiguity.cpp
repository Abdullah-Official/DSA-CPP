#include<iostream>
using namespace std;

class A{

    public:

    void func(){
        cout << "I am Class A" << endl;
    }

};

class B{

    public:

    void func(){
        cout << "I am Class B" << endl;
    }

};

class C: public A, public B {

};

int main(){
    C obj;
    obj.A::func();
}