#include "tree.h"
using namespace std;
void robot_maze::Tree::InstTree(){
    my_tree.insert(pair<int,vector<int>>(0,{1}));
    my_tree.insert(pair<int,vector<int>>(1,{2}));
    my_tree.insert(pair<int,vector<int>>(2,{3,4}));
    my_tree.insert(pair<int,vector<int>>(3,{}));
    my_tree.insert(pair<int,vector<int>>(4,{}));
}
map<int,vector<int>> robot_maze::Tree::GetTree(){
    return my_tree;
}
vector<int> robot_maze::Tree::FindPrevious(int start){
    int num_nodes = my_tree.size();
    queue<int> to_go;
    vector<bool> visited;
    vector<int> previous;
    to_go.push(start);
    for(int i = 0; i<num_nodes; i++){
        visited.push_back(false);
        previous.push_back(NULL);
    }
    while(!to_go.empty()){
        int current_node = to_go.front();
        to_go.pop();
        for(auto x : my_tree[current_node]){
            if(visited[x] == false){
                visited[x] = true;
                previous[x] = current_node;
                to_go.push(x);
            }
        }
    }
    return previous;
}
//vector<int> robot_maze::Tree::PrevToPath(int start,int stop){}