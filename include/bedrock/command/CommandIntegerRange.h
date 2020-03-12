#pragma once



class CommandIntegerRange {

public:
    void getMaxValue()const;
    void getMinValue()const;
    void getInverted()const;
    CommandIntegerRange(int, int, bool);
    CommandIntegerRange();
    bool isWithinRange(int)const;
};
