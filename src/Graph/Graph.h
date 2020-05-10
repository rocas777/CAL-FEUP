#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include "Node.h"
#include "MutablePriorityQueue.h"

using namespace std;



class Graph
{
    unordered_map<long,Node*> nodes;
    void initNodes(Node *origin,Node *target);
    bool relax(Node *v,Node *w, double weight,long int targetDistance);
public:
    unordered_map<long,Node*> getNodes();
    double Dijkstra(long int origin,long int  target,long int targetDistance);
    Node *findNode(const int &id) const;
    bool addNode(const int &id, int x, int y);
    bool addEdge(int origId, int destId);
    vector<Node> getPath(long int origin,long int dest);
    vector<Node> pointsToDraw;

    //FloydWarshall implementation
    void FloydWarshall();
    void printMatrix(double** matrix);

    double min_x=8000000000000.0;
    double max_x=-800000000000.0;
    double min_y=8000000000000.0;
    double max_y=-800000000000.0;
};


#endif // GRAPH_H
