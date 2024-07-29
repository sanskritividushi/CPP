// #include <iostream>
#include <bits/stdc++.h>
// #include <cmath>
// #include <map>
// // #include <string>
// using namespace std;

// // void check(int n, string s){
// //     string new="";
// //     int check1=0, check0 = 0;
// //     for (int i = 0; i < s.size(); i++){
// //             if(s[i]=='1'){
// //                 check1++;
// //                 new += '1';
// //                 continue;
// //             }
// //             if(s[i]=='0'){
// //                 while(s[i]!='1'){
// //                     check0++;
// //                     i++;
// //                 }
// //             }
// //             new += '0';
// //         }
// //         if(new=="0110" || new=="0" ||new=="01" || new=="10")cout << "NO" << endl;
// //         if(new==s && check0>check1)cout << "NO" << endl;
// //         if(new==s && check1>check0)cout << "YES" << endl;
// //         s = new;
// //         for(auto it:s){
// //             if(it=='0')
// //                 check0++;
// //             if(it=='1')
// //                 check1++;
// //         }
// //         if(check0>check1)cout << "NO" << endl;
// //         if(check1>check0)cout << "YES" << endl;
// // }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         string s;
//         cin >> n>>s;
//         if(s=="0" ||s=="01" || s=="10"){
//             cout << "NO" << endl;
//             continue;
//         }
//         if(s=="1")cout << "YES" << endl;
//         int ones = 0, zeros = 0;
//         for(auto it:s){
//             if(it=='0')
//                 zeros++;
//             if(it=='1')
//                 ones++;
//         }
//         if (ones > zeros) cout << "YES" << endl;
//         else{
//             string news="";
//             int check1=0, check0 = 0;
//             for (int i = 0; i < s.size(); i++){
//                     if(s[i]=='1'){
//                         check1++;
//                         news += '1';
//                         continue;
//                     }
//                     if(s[i]=='0'){
//                         while(s[i]!='1'){
//                             check0++;
//                             i++;
//                         }
//                 }
//                 news += '0';
//             }
//             if(news=="0110" || news=="0" ||news=="01" || news=="10"){
//                 cout << "NO" << endl;
//                 continue;
//             }
//             if(news==s && check0>check1){
//                 cout << "NO" << endl;
//                 continue;
//             }
//             if(news==s && check1>check0){
//                 cout << "YES" << endl;
//                 continue;
//             }
//             s = news;
//             for(auto it:s){
//                 if(it=='0')
//                     check0++;
//                 if(it=='1')
//                     check1++;
//             }
//             if(check0>check1)cout << "NO" << endl;
//             if(check1>check0)cout << "YES" << endl;
//             }
//     }
//     return 0;
// }


// #include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Edge case handling
        if (s == "0" || s == "01" || s == "10") {
            cout << "NO" << endl;
            continue;
        }
        if (s == "1") {
            cout << "YES" << endl;
            continue;
        }

        int ones = 0, zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
            if (c == '1') ones++;
        }

        if (ones > zeros) {
            cout << "YES" << endl;
        } else {
            // Simplify the sequence
            bool possible = false;
            while (true) {
                string new_s;
                int new_ones = 0, new_zeros = 0;
                for (int i = 0; i < s.size();) {
                    int count_0 = 0, count_1 = 0;
                    int j = i;
                    while (j < s.size() && s[j] == s[i]) {
                        if (s[j] == '0') count_0++;
                        else count_1++;
                        j++;
                    }
                    if (count_1 > count_0) {
                        new_s += '1';
                        new_ones++;
                    } else {
                        new_s += '0';
                        new_zeros++;
                    }
                    i = j;
                }
                if (new_ones > new_zeros) {
                    possible = true;
                    break;
                }
                if (new_s == s) break; // No more changes possible
                s = new_s;
            }
            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
