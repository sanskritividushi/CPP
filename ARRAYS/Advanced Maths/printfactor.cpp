#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 780;
    //method 1 is brute force ru till n
    //method 2- run till sqrt n
    //method 3
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            ans.push_back(i);
            while(n%i==0){
                n = n / i; //basically normal pen and paper method to find factor, for 780 divide by 2 and keep dividing till it cant be divided by 2 anymore then move to next prime, this way all number divisible by 2 like 4 ,6 also get eliminated, 
                //also since n is being divided, rather than runing till 780, the looop will only run till the biggest prime factor 
            }
        }
    }
}
//drawback- if number is prime then complexity remains o(n)
