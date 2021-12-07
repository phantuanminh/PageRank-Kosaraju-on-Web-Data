#pragma once

#include <vector>
#include <list>
#include <unordered_map>
#include <iostream>

class Graph {
    public:
        /** @brief Default Constructor */
        Graph();

        /** @brief Copy Constructor */
        Graph(const Graph& other);

        /**
         * @brief Constructs a graph with a given vector of edge pairs 
         * @param data Input data
         */
        Graph(std::vector<std::pair<int, int>> data);

        /**
         * @brief Inserts a new vertex into the graph
         * @param v Vertex key
         */
        void insertVertex(int v);

        /**
         * @brief Returns OUTGOING adjacent vertexes of a vertex
         * 
         * @param v
         */
        std::list<int> outgoingAdjacentVertexes(int v);

        /**
         * @brief Returns INCOMING adjacent vertexes of a vertex
         * 
         * @param v
         */
        std::list<int> incomingAdjacentVertexes(int v);

        /**
         * @brief Return whether 2 vertexes are adjacent
         * 
         * @param v1 
         * @param v2
         */
        // TODO: FIX THIS
        bool areAdjacent(int v1, int v2);

        /**
         * @brief Insert an edge between 2 vertexes
         * 
         * @param v1 
         * @param v2 
         */
        void insertEdge(int v1, int v2);

        /** Adjacency dictionary getter */
        std::unordered_map<int, std::list<int>> getOutgoingAdjacencyDict();

        /** Incoming adjacency dictionary */
        std::unordered_map<int, std::list<int>> getIncomingAdjacencyDict();

    private:
        std::unordered_map<int, std::list<int>> adjacency_dict_outgoing_;
        std::unordered_map<int, std::list<int>> adjacency_dict_incoming_;
};