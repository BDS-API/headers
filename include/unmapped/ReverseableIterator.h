#pragma once



class ReverseableIterator {

public:
    class Iterator;

    ReverseableIterator(int, int, bool); // _ZN19ReverseableIteratorC2Eiib
    void begin()const; // _ZNK19ReverseableIterator5beginEv
    void end()const; // _ZNK19ReverseableIterator3endEv
    class Iterator {

    public:
        void operator!=(ReverseableIterator::Iterator const&)const; // _ZNK19ReverseableIterator8IteratorneERKS0_
        void operator*()const; // _ZNK19ReverseableIterator8IteratordeEv
        Iterator(int, bool); // _ZN19ReverseableIterator8IteratorC2Eib
    };
};
