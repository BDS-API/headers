#pragma once

#include "PathfinderNode.h"


class BinaryHeap {

public:
    void _init();
    void changeCost(PathfinderNode *, float);
    BinaryHeap();
    void clear();
    void peek();
    void remove(PathfinderNode *);
    void upHeap(int);
    void size();
    void insert(PathfinderNode *);
    ~BinaryHeap();
    void downHeap(int);
    bool isEmpty();
    void pop();
};
