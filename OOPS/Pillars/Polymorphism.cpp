#include<iostream>
using namespace std;


class A{

    public:
    void sayHello(){
        cout << "Hello Abdullah" << endl;
    }
    void sayHello(string name){
        cout << "Hello " << name  << endl;
    }
};

class B{
    public:
    int a, b;
    int add(){
        return a + b;
    }
    void operator+ (B& obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output: " << val2-val1 << endl;
    }
};


int main(){

    // operator overloading
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    // A obj;
    // // function overloading
    // obj.sayHello();
    // obj.sayHello("RuGuu");

    return 0;
}