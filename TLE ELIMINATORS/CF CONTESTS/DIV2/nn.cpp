#include <iostream>
#include <vector>
using namespace std;
int solution(vector<string> &A) {
    int RR = 0, GG = 0, RG = 0, GR = 0;
    for (string &s : A) {
        if (s == "RR") RR++;
        else if (s == "GG") GG++;
        else if (s == "RG") RG++;
        else GR++;
    }
    
    if (RG || GR)
        return RR + GG + 2 * min(RG, GR) + (RG != GR);
    else
        return max(RR, GG);
}

Please change karlio variables name