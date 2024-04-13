#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 
    char *name;
    int health; 

    hero (){
        name= new char[100];
    }
    hero (hero &temp){
        char *ch= new char [strlen(temp.name)+1];
        this->name= ch;

        strcpy(ch, temp.name);
        this->health=temp.health;
    }
    ~hero(){
        cout << "descructor called"<< endl;
    }
    void print(){
        cout << this->health << endl;
        cout << this-> level <<endl;
        cout << this-> name <<endl;
        cout << endl;
    }
    void setName(char name[]){
        strcpy(this->name,name);  //strcpy used to copy one string into another 
    }

};

int main(){
    
    hero h1;
    h1.health=70;
    h1.level='d';

    hero *h3= new hero();//for dyanmically allocated values, destructor is manually called 
    delete b; //maually called destructor , called only once 
    







    return 0;
}