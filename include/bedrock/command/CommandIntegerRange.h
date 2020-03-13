#pragma once



class CommandIntegerRange {

public:
    CommandIntegerRange(); // _ZN19CommandIntegerRangeC2Ev
    CommandIntegerRange(int, int, bool); // _ZN19CommandIntegerRangeC2Eiib
    bool isWithinRange(int)const; // _ZNK19CommandIntegerRange13isWithinRangeEi
    void getMinValue()const; // _ZNK19CommandIntegerRange11getMinValueEv
    void getMaxValue()const; // _ZNK19CommandIntegerRange11getMaxValueEv
    void getInverted()const; // _ZNK19CommandIntegerRange11getInvertedEv
};
