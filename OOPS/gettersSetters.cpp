#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 

    public:
    int health; 

    char getLevel(){
        return level;
    }
    void setLevel (char l){
        level=l;
    }
};

int main(){
    //static allocation 
    hero h1; 
    h1.health=70;
    cout << h1.health <<endl;
    h1.setLevel('d');
    cout << h1.getLevel() <<endl;

    //dynamic allocation
    hero *h2= new hero;
    h2-> setLevel('*');
    cout << (*h2).level <<endl;
    cout << h2->level <<endl;


}