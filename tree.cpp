#include "tree.h"
using namespace std;
map<int,vector<int>> robot_maze::Tree::GetTree(){
    my_tree.insert(pair<int,vector<int>>(1,{2,3,4}));
    my_tree.insert(pair<int,vector<int>>(2,{3,4}));
    my_tree.insert(pair<int,vector<int>>(3,{}));
    my_tree.insert(pair<int,vector<int>>(4,{}));
    return my_tree;
}