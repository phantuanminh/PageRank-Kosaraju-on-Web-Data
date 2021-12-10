#pragma once

#include "graph.h"
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <list>
#include <unordered_map>

class Kosaraju {
    public: 
        //returns the strongly connected components of a graph
        Kosaraju(Graph graph);
        std::vector<std::set<int>> getSCC();

    private:
        void buildStackDFS(int node, std::unordered_map<int, bool>& visited, std::stack<int>& st);
        void buildStackDFS2(int node, std::unordered_map<int, bool>& visited, std::set<int>& scc);
        Graph graph_;
        std::unordered_map<int, std::list<int>> incomingList_;
        std::unordered_map<int, std::list<int>> outgoingList_;

};