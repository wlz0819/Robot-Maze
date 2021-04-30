#include "maze.h"
void robot_maze::Maze::BlankMaze(){
    for(int row=0; row < 10; row++){
        vector<char> current_row;
        for(int item=0; item < 10; item++){
            current_row.push_back('-');
        }
        mymaze.push_back(current_row);
    }
}
vector<vector<char>> robot_maze::Maze::GetMaze(){
    return mymaze;
}