#include <iostream>
#include <list>
using namespace std;

class graph{
    int v; //accepts no of nodes
    list<int> *l;
    //l is a pointer to an array in which each el of array is listed 
    // 0-> 1,2 so 0 adj to 1 and 2
    // 1-> 2,0 so 1 adj to 2 and 0 
    //l points to 0 and 1 here

public:
    graph(int v){
        this->v = v;
        l = new list<int> [v];
    }
    void addedge(int x, int y){
        //edge from x to y, bidirectional
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printadj(){
        for (int i = 0; i < v; i++){
            cout << "vertex " <<i << "->";
            for (int nbr : l[i]) //for every element we need to iterate over its neighbour using auto interator 
            {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(1,2);
    g.printadj();

    return 0;
}