#pragma once



class BinaryHeap {

public:
    BinaryHeap();
    ~BinaryHeap();
    void insert(PathfinderNode *);
    void upHeap(int);
    void remove(PathfinderNode *);
    void clear();
    void changeCost(PathfinderNode *, float);
    void pop();
    void downHeap(int);
    void peek();
    void size();
    void _init();
    bool isEmpty();
};
