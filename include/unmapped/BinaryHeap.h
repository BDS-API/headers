#pragma once



class BinaryHeap {

public:

    void _init();
    BinaryHeap(void);
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
