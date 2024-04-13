#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 
    char *name; //name[100]; but writing like this is bad practice so we write *name and initialise it later wherever required
    int health; 
    static int time;

    hero(){
        name= new char[100];
    }
    hero (hero &temp){
        char *ch= new char [strlen(temp.name)+1];
        this->name= ch;

        strcpy(ch, temp.name);
        this->health=temp.health;
    }
    void print(){
        cout << this->health << endl;
        cout << this-> level <<endl;
        cout << this-> name <<endl;
    }
    void setName(char name[]){
        strcpy(this->name,name);  //strcpy used to copy one string into another 
    }

};
int hero::time=1;
int main(){
    
    // hero h1;
    // h1.health=70;
    // h1.level='d';
    // // char name[5]= "pari";
    // h1.setName(name);
    // cout << hero::time <<endl;
    // h1.print();

    hero *d= new hero;
    cout << hero::time <<endl;
    d->health=666;
    d->level='f';
    char name[10]="sanskriti";
    d->setName(name);
    d->print();
    
}