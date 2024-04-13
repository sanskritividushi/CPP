#include <iostream> 
#include <vector>
using namespace std;
class Stack{
private:
    vector <int> v;
public: 
    void push(int data){
        v.push_back(data);
    }
    //stack will beb empty if size of vector is 0
    bool isEmpty(){
        return v.size()==0;
    }
    void pop(){
        if(!isEmpty()){
            v.pop_back();
        }
    }
    int top(){
        return v[v.size()-1];
    }
};

int main(){
    Stack s; 

    for (int i=1; i<=5; i++){
        s.push(i*i);
    }
    //print by popping each element 
    while(!s.isEmpty()){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}

