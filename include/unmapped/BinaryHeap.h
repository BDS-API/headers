#pragma once



class BinaryHeap {

public:
    void _init(); // _ZN10BinaryHeap5_initEv
    BinaryHeap(); // _ZN10BinaryHeapC2Ev
    ~BinaryHeap(); // _ZN10BinaryHeapD2Ev
    void insert(PathfinderNode *); // _ZN10BinaryHeap6insertEP14PathfinderNode
    void upHeap(int); // _ZN10BinaryHeap6upHeapEi
    void clear(); // _ZN10BinaryHeap5clearEv
    void peek(); // _ZN10BinaryHeap4peekEv
    void pop(); // _ZN10BinaryHeap3popEv
    void downHeap(int); // _ZN10BinaryHeap8downHeapEi
    void remove(PathfinderNode *); // _ZN10BinaryHeap6removeEP14PathfinderNode
    void changeCost(PathfinderNode *, float); // _ZN10BinaryHeap10changeCostEP14PathfinderNodef
    void size(); // _ZN10BinaryHeap4sizeEv
    bool isEmpty(); // _ZN10BinaryHeap7isEmptyEv
};
