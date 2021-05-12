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
vector<vector<char>> robot_maze::Maze::MakeMaze(int walls){
    int currentwalls = 0;
    while(currentwalls < walls){
        int x = rand() % 10;
        int y = rand() % 10;
        if(mymaze[x][y] == '-'){
            mymaze[x][y] = 'x';
            currentwalls++;
        }
    }
    return mymaze;
}
vector<vector<char>> robot_maze::Maze::AddStart(){
    bool added_start = false;
    while(!added_start){
        int x = rand() % 10;
        int y = rand() % 10;
        if(mymaze[x][y] == '-'){
            mymaze[x][y] = 'S';
            added_start = true;
        }
    }
    return mymaze;
}
vector<vector<char>> robot_maze::Maze::AddEnd(){
    bool added_end = false;
    while(!added_end){
        int x = rand() % 10;
        int y = rand() % 10;
        if(mymaze[x][y] == '-'){
            mymaze[x][y] = 'E';
            added_end = true;
        }
    }
    return mymaze;
}
char robot_maze::Maze::RetrieveChar(pair<int,int> coords){
    return mymaze[coords.first][coords.second];
}
map<pair<int,int>,pair<int,int>> robot_maze::Maze::MazeToTree(){
    pair<int,int> start;
    for(int x=0; x < 10; x++){
        for(int y=0; y < 10; y++){
            pair<int,int> current_coords;
            current_coords.first = x;
            current_coords.second = y;
            if(RetrieveChar(current_coords) == 'S'){
                start = current_coords;
            }
        }
    }
}