#pragma once

#include "./PathfinderNode.h"


class BinaryHeap {

public:

    void _init();
    BinaryHeap();
    ~BinaryHeap();
    void insert(PathfinderNode *);
    void upHeap(int);
    void clear();
    void peek();
    void pop();
    void downHeap(int);
    void remove(PathfinderNode *);
    void changeCost(PathfinderNode *, float);
    void size();
    bool isEmpty();
};
