#include<iostream>
using namespace std;


void reachHome(int src, int dest){
    // Base Case 
    if(src == dest){
        cout << "Reached" << endl;
        return;
    }
    src++;
    reachHome(src, dest);

}

int main(){
    int dest = 10;
    int src = 1;
    reachHome(src,dest);
}