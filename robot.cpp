#include "tree.h"
using namespace std;
int main(){
    robot_maze::Tree() tree;
    std::map<int,std::vector<int>> my_tree = tree.GetTree();
    for(auto x : my_tree){
        for(auto i : x.second){
            cout << i << endl;
        }
    }
    return 0;
}