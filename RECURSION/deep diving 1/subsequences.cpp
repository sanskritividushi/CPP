#include <iostream>
using namespace std;

void subsequences(char *in, char *out, int i, int j){
    if(in[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    //rec cases
    //ignore i
    subsequences(in, out, i+1, j);
    //take i
    out[j] = in[i];
    subsequences(in, out, i+1, j+1);
    
}
int main(){
    char in[] = "abcd";
    char out[100];
    subsequences(in, out, 0,0);
    return 0;
}