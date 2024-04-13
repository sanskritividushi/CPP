#include <iostream>
using namespace std;

int main(){
    pair <int , int> p;
    p.first = 10;
    p.second = 20;
    cout << p.first << " " << p.second << endl;

    pair <int , int> pq (300, 400);
    cout << pq.first <<  " "<< pq.second << endl;


    pair <int , int> r; 
    r=make_pair(300, 400);
    cout << r.first <<  " "<< r.second << endl;

    pair <int , pair<int , int> > q;
    q.first= 100; 
    q.second.first= 30000;
    q.second.second =345;

    cout << q.first <<  " "<< q.second.first <<  " "<< q.second.second << endl;





    return 0;
}