#include <iostream>
using namespace std;

// int main(){
//     int arr[] = {0, 0,0, 0, 1, 1, 1};
//     int n = sizeof(arr) / sizeof(int);
//     int s = 0;
//     int ans = 0;
//     int e = n - 1;
//     while(s<=e){
//         int mid = (s+e)/2;
//         if(arr[mid]==1){
//             ans= n-mid;
//             e = mid - 1;
//         }
//         else if(arr[mid]==0){
//             s= mid + 1;
//         }
//     }
//     cout << ans << endl;
// }


void computeLPSArray(char* pat, int M, int* lps);
 
// Prints occurrences of pat[] in txt[]
void KMPSearch(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while ((N - i) >= (M - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
 
        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}
 
// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
 
// Driver code
int main()
{
    char txt[] = "1100011010001010";
    char pat[] = "0010";
    KMPSearch(pat, txt);
    return 0;
}