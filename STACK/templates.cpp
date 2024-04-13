#include <iostream> 
#include <vector>
using namespace std;

template<typename T>

class Stack{
private:
    vector <T> v;
public: 
    void push(T data){
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
    T top(){
        return v[v.size()-1];
    }
};

int main(){
    // Stack<int> s; 

    // for (int i=1; i<=5; i++){
    //     s.push(i*i);
    // }
    // //print by popping each element 
    // while(!s.isEmpty()){
    //     cout << s.top() <<endl;
    //     s.pop();
    // }

    Stack<char> s; 

    for (int i=65; i<=70; i++){
        s.push(i);
    }
    //print by popping each element 
    while(!s.isEmpty()){
        cout << s.top() <<endl;
        s.pop();
    }


    return 0;
}

