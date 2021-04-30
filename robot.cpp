#include "tree.h"
using namespace std;
int main(){
    robot_maze::Tree tree;
    tree.InstTree();
    vector<int> myprevious = tree.FindPrevious(0);
    for(auto i : myprevious){
        cout << i << endl;
    }
    vector<int> mypath = tree.PrevToPath(0,3,myprevious);
    for(auto i : mypath){
        cout << i << endl;
    }
    return 0;
}