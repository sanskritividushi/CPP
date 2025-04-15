#include <iostream>
using namespace std;
void swap(int &a, int &b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
// int main(){
//     //* means datatype that holds address
//     int a=10;
//     int* b = &a;  //& means ad, *b means it holds the address of an integer value a. 
//     cout << a << endl; 
//     cout << b << endl; //b saves the address of a so b is ad value
//     cout << *b << endl; //*b here is defererence op which gives value of b which is a
//     //*b is value at address b, 
//     cout << *&b << endl;
//     cout << endl;

//     string x = "abcc";
//     string *y = &x;
//     cout << x << endl;
//     cout << y << endl;
//     cout << *y << endl;

//     //pointer that stores ad of pointer 
//     string** z = &y;
//     cout << z << endl; //ad of y
//     cout << *z << endl; //value of z- while is ad of y which is ad of x
//     cout << **z << endl;
//     return 0;
// }

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}