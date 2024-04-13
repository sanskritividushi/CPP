#include <iostream>
using namespace std;

int main(){
    int i = 4;
    int j = 4;
    int arr[4][4] = {{1, 8, 3, 4},
                     {5, 10, 7, 8},
                     {90, 0, 11, 12},
                     {12, 0, 15, 16}};
    int count = 0;
    cout << "No of zeroes" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4;j++){
            if(arr[i][j]==0){
                count++;
            }
        }
        // cout << endl;
    }
    cout <<count<<endl;
    int sum=0;
    cout << "sum of els" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4;j++){
            sum += arr[i][j];
        }
        // cout << endl;
    }
    cout <<sum<<endl;
    cout << "Diag els" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4;j++){
            if(i==j){
                cout << arr[i][j] << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << "upper triangle els" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4;j++){
            if(i<j){
                cout << arr[i][j] << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << "lower traingle even els" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4;j++){
            if((i>j)&&(arr[i][j]%2==0)){
                cout << arr[i][j] << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    int sum1=0;
    cout << "avg of els" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4;j++){
            sum1+= arr[i][j];
        }
        // cout << endl;
    }
    cout <<sum/(i*j)<<endl;

    

    return 0;
}