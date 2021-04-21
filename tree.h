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
            std::map<int,std::vector<int>> GetTree();
    };
} //namespace robot_maze

#endif //TREE