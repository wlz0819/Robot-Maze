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
vector<pair<int,int>> robot_maze::Maze::MazeToTree(){
    pair<int,int> start;
    const int grid_size = 100;
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
    vector<pair<int,int>> prev;
    queue<pair<int,int>> to_go;
    to_go.push(start);
    while(!to_go.empty()){
        int current_node = to_go.front();
        to_go.pop();
        int node_x = current_node.first;
        int node_y = current_node.second;
        vector<pair<int,int>> all_pairs;
        pair<int,int> pair1;
        pair1.first = node_x+1;
        pair1.second = node_y;
        pair<int,int> pair2;
        pair1.first = node_x;
        pair1.second = node_y+1;
        pair<int,int> pair3;
        pair1.first = node_x-1;
        pair1.second = node_y;
        pair<int,int> pair4;
        pair1.first = node_x;
        pair1.second = node_y-1;
        all_pairs.push_back(pair1);
        all_pairs.push_back(pair2);
        all_pairs.push_back(pair3);
        all_pairs.push_back(pair4);
        for(auto i:all_pairs){
            if(!(find(prev.begin(), prev.end(), i) != prev.end())){
                if(!((i.first > 9)||(i.second > 9)||(i.first < 0)||(i.second < 0))){
                    prev.push_back(i);
                    to_go.push_back(i);
            }
        }
    }
    pair<int,int> end;
    for(int x=0; x < 10; x++){
        for(int y=0; y < 10; y++){
            pair<int,int> current_coords;
            current_coords.first = x;
            current_coords.second = y;
            if(RetrieveChar(current_coords) == 'E'){
                end = current_coords;
            }
        }
    }
    vector<pair<int,int>> path;
    path.insert(path.begin(),end);
}