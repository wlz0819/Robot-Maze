#ifndef MAZE
#define MAZE

#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;
namespace robot_maze{
    class Maze{
        private:
        vector<vector<char>> mymaze;
        public:
        void BlankMaze();
        vector<vector<char>> GetMaze();
    };
} // namespace robot_maze
#endif //MAZE