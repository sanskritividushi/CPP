#include <iostream>
using namespace std;
 
void spiralprint(int a[][100], int n, int m){
    //ititialise iterators
    int sr=0, sc=0, ec=m-1, er= n-1;

    while (sr<= er and sc<= ec){
        //step 1 sr 
       for (int col=sc; col<=ec; col++){
        cout<< a[sr][col] <<" ";
       } 
       sr++;

       for (int row = sr; row<= er; row++){
        cout<< a[row][ec]<< " ";
       }
        ec--;

        for (int col=ec; col>= sc; col--){
            cout<< a[er][col] <<" ";
        }
        er--;
        
        for (int row=er; row>= sr; row--){
            cout<< a[row][sc] << " ";
        }
        sc++;

    }
}
int main(){
    int a[100][100];
    int r, c;
    cin >> r>> c;

    int val=1;
    for (int i=0; i<r; i++){
        for (int j=0;j<c ; j++){
            a[i][j]=val;
            val++;
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0;j<c ; j++){
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    spiralprint(a,r,c);
    return 0;
}