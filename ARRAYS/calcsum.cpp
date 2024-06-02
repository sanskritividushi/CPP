//Raj is a very smart kid who recently started learning computer programming.
// His coach gave him a cyclic array A having N numbers, and he has to perform Q operations on this array.
// In each operation the coach would provide him with a number X. 
//After each operation, every element of the cyclic array would be replaced by the sum of itself and the element lying X positions behind it in the cyclic array.
// All these replacements take place simultaneously. 
//For example, if the cyclic array was [a, b, c, d], then after the operation with X = 1, the new array would be [a+d, b+a, c+b, d+c]. 
//He needs to output the sum of the elements of the final array modulus 10^9+7. 
//He made a program for it but it's not very efficient. 
//You know he is a beginner, so he wants you to make an efficient program for this task because he doesn't want to disappoint his coach

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q; //number of operations 
    cin >> q;
    int x;
    int arr1[n];
    while(q>0){
        cin >> x;//valye of first operation taken 
        for (int i = 0; i < n; i++){
            int index = i - x; // if i=0, index=-1,
            if(index<0){
                index = index + n; //if index=-1, index now becomes n-1 eg 5-1=4, so last element is added to first index 
            }
            arr1[i]= arr[i]+arr[index];//new array gets value of arr[i]+arr[index]
        }
        for (int i = 0; i < n; i++){
            arr[i] = arr1[i];//values copied in original arr
        }
        q--; //operation reduced by 1
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = (sum + arr[i])% 1000000007;
    }
    cout << sum;
    return 0;
}