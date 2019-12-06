#pragma once

class BinaryHeap {

public:

    void _init(void);
    void BinaryHeap(void);
    void insert(PathfinderNode *);
    void upHeap(int);
    void clear(void);
    void peek(void);
    void pop(void);
    void downHeap(int);
    void remove(PathfinderNode *);
    void changeCost(PathfinderNode *, float);
    void size(void);
    bool isEmpty(void);
};
