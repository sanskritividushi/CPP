#include <iostream>
#include <map>
#include <string>
using namespace std;

// store key and mapping
// insert,query and delete
// self balancing bst in map, ordering defined by key

int main(){
    map<string, int> m;
    m.insert(make_pair("Mango", 100));
    pair<string, int> p;
    p.first = "apple";
    p.second = 120;
    m.insert(p);
    m["banana"] = 20;

    //search
    string fruit;
    cin >> fruit;

    //update price
    // m[fruit] += 30;
    auto it = m.find(fruit);
    if(it!=m.end()){
        cout << "price of " << fruit << " is " << m[fruit] << endl;
    }
    else{
        cout << "fruit not present" <<endl;
    }

    //another way to find a particular map
    //it stores unique keys only once  (can use in duplicate number question)
    //uses function "count" to check if key is present in map
     
    if(m.count(fruit)){
        cout << "price is " << m[fruit] << endl;   
    }
    else{
        cout << "couldnt find " << endl;
    }

    //find function returns an interator and count fucntion returns an integer
    //keys are sorted lexiographically
    
    //erase
    m.erase(fruit);

    if(m.count(fruit)){
        cout << "price is " << m[fruit] << endl;   
    }
    else{
        cout << "couldnt find " << endl;
    }

    //iterate over all elemnts
    m["litchi"] = 60;
    m["kiwi"] = 80;
    for (auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " and " << it->second << endl;
    }
    // m[fruit] += 30;
    // for (auto it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " and " << it->second << endl;
    // }
}
