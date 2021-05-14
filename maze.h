#ifndef MAZE
#define MAZE

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
namespace robot_maze{
    class Maze{
        private:
        map<pair<int,int>,pair<int,int>> maze_tree;
        vector<vector<char>> mymaze;
        public:
        void BlankMaze();
        vector<vector<char>> GetMaze();
        vector<vector<char>> MakeMaze(int walls);
        vector<vector<char>> AddStart();
        vector<vector<char>> AddEnd();
        char RetrieveChar(pair<int,int>);
        vector<pair<int,int>> MazeToTree();
    };
} // namespace robot_maze
#endif //MAZE