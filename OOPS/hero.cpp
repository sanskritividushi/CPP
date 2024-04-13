#include <iostream> 
using namespace std;

class hero{
    public:
    int health; 
    private:
    char level; 
};

int main(){
    hero h1;
    h1.health=70;
    cout << h1.health <<endl;

}