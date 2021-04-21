#ifndef TREE
#define TREE

#include <iostream>
#include <map>
#include <vector>
#include <queue>

namespace robot_maze{
    class Tree{
        private:
            std::map<int,std::vector<int>> my_tree;
        public:
            void InstTree();
            std::map<int,std::vector<int>> GetTree();
            std::vector<int> FindPrevious(int start);
            std::vector<int> PrevToPath(int start, int stop);
    };
} //namespace robot_maze

#endif //TREE