#include <iostream>
using namespace std;

void genstr(char *in, char *out, int i, int j){
    if(in[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    //rec cases
    int firstdig = in[i] - '0';
    char ch= 'A'+ firstdig-1;
    out[j]=ch;
    // ignore i
    genstr(in, out, i+1, j+1);
    if(in[i+1]!='\0'){
        int secdig= in[i+1] - '0';
        int no= firstdig*10 + secdig;
        if(no<=26){
            ch= 'A'+ no-1;
            out[j]=ch;
            genstr(in, out, i+2, j+1);
        }
    }
    
}
int main(){
    char in[100];
    cin >> in;
    char out[100];
    genstr(in, out, 0,0);
    return 0;
}