#include <bits/stdc++.h>
// #include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        int firsthash = 0;
        int row1 = -1, col1 = -1, row2 = -1, col2 = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == '#' && firsthash == 0){
                    firsthash = 1;
                    row1 = i;
                    col1 = j;
                }
                if(a[i][j] == '#'){
                    row2 = i;
                    col2 = j;
                }
            }
        }

        int crow, ccol;
        if(row2 == -1){ 
            crow = row1 + 1;
            ccol = col1 + 1;
        } else { 
            crow = (row1 + row2 + 2) / 2;
            ccol = col1 + 1; 
        }

        cout << crow << " " << ccol << endl;
    }
    return 0;
}
