#include<iostream>
using namespace std;

int main(){


        // int num = 1;
        // switch (num) {
        //     case 1: cout << "Num1" << endl;
        //             break;
        //     default: cout << "Default Case" << endl;
        // }

        // Mini Calculator

        // int number1, number2;
        // char operation;

        // cout << "Enter Number 1: " << endl;
        // cin >> number1;
        // cout << "Enter Number 2: " << endl;
        // cin >> number2;
        // cout << "What Operation you want to perform ? " << endl;
        // cin >> operation;

        // switch(operation){
        //     case '+': 
        //         cout << number1+number2;
        //         break;
        //     case '-': 
        //         cout << number1-number2;
        //         break;
        //     case '*': 
        //         cout << number1*number2;
        //         break;
        //     case '/': 
        //         cout << number1/number2;
        //         break;
        //     default:  cout << "Not a Valid Operator";
        // }


        // HomeWork Rupees Question

        int amount;
        cout << "Enter Amount: ";
        cin >> amount;
        int rs1 = 100;
        int rs2 = 50;
        int rs3 = 20;
        int rs4 = 10;
        int a,b,c,d;
        int oAmount = amount;

       for(int i=0; i<=4; i++){
         switch(i){

            case 1:
                oAmount = amount/rs1; 
                amount = amount - oAmount*100;             
                 a = oAmount;
                cout << "100: " << a << endl;
                break;
            case 2:
                 oAmount = amount/rs2; 
                amount = amount - oAmount*50; 
                 b = oAmount;
                cout << "50: " << b << endl;
                break;
            case 3:
              oAmount = amount/rs3; 
                amount = amount - oAmount*20; 
                 c = oAmount;
                cout << "20: " << c << endl;
                break;
            case 4:
              oAmount = amount/rs4; 
                amount = amount - oAmount*10; 
                 d = oAmount;
                cout << "10: " << d << endl;
                break;
        }
       }

}