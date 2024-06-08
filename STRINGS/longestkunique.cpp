#include <iostream>
#include <map>
using namespace std;

void longestkunique(char a[], int k){
    int len=-1;
    int freq[26]={0};
    int i = 0;
    int unique = 0;
    for (int j = 0; a[j] != '\0'; j++)
    {
        freq[a[j] - 'a']++;
        if (freq[a[j] - 'a'] ==1){
            unique++;
        }
        while(unique>k){
            //more than k unique chars so shrink window
            freq[a[i] - 'a']--;
            if (freq[a[i] - 'a'] ==0){
                unique--;
            }
            i++;
        }
        if(unique == k){len = max(len, j - i + 1);}
    }
    cout << len;
}

void longestkunique2(char a[], int k){
    int n= strlen(a);
    int freq[128]={0};
    int maxlen = 0, r = 0, l = 0;
    map<char, int> m;
    while(r < n){
        m[a[r]]++;
        if(m.size() > k){
            freq[a[l]]--;
            if(freq[a[l]] == 0){
                m.erase(a[l]);
            }
            l++;
        }
        if(m.size()<=k){
            maxlen = max(maxlen, r - l + 1);
        }
        freq[a[r]]++;
        r++;
    }
    cout << maxlen;
}
int main(){
    char a[] = "abbcefff";
    longestkunique2(a, 3);
    return 0;
}
