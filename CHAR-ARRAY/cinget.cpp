#include <iostream> 
using namespace std;


    void readline(char a[], char delimiter){
        int i=0; 
        char ch=cin.get(); //ignore '\n' after taking input of n.,,, we take the input pointer value but dont store it anywhere due to b use of get, thus \n ignored.
        
        while (ch!= delimiter){
            a[i]= ch; 
            i++;
            ch=cin.get();
        }
        a[i]='\0';
    }
    int main(){
        char a[100];
        readline(a, '#');
        cout << a <<endl;

        return 0;
}

