#include "tree.h"
#include "maze.h"
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
    robot_maze::Maze maze;
    maze.BlankMaze();
    vector<vector<char>> mymaze = maze.GetMaze();
    for(auto i : mymaze){
        for(auto x : i){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}