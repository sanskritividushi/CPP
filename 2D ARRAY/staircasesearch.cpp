#include <iostream>
using namespace std;


void staircase(int a [][4], int n, int m){
    int i=0 ; int j = m-1; 
    int key=14; 
    bool ispresent = false;
    while (i<n and j>=0){
        if (a[i][j]== key){
            cout << "key found at " << i << ", " << j << endl;
            ispresent =true;
            break;
        }
        else if (a[i][j]< key){
            i++;
        }
        else{
            j--;
        }
    }
    if (ispresent== false){
        cout << "key not found" << endl;
    }
}
int main(){

    int a[4][4]= {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16}
        }
        int n=4, int m=4; 

        staircase(a, n, m);
        return 0;

    }
    int n;

