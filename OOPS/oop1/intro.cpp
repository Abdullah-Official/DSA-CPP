#include <iostream>
using namespace std;

class Hero
{

  private:
    int health;

  public:
    
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char lvl){
        level = lvl;
    }

};

int main()
{
    Hero h1;
    // cout << sizeof(h1) << endl;
    h1.level = 'A';
    h1.setHealth(100);
    cout << "Health is: " << h1.getHealth() << endl;
    cout << "Level is: " << h1.level << endl;

    return 0;
}