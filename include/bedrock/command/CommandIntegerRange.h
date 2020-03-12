#pragma once



class CommandIntegerRange {

public:
    CommandIntegerRange(int, int, bool);
    void getMaxValue()const;
    void getInverted()const;
    CommandIntegerRange();
    bool isWithinRange(int)const;
    void getMinValue()const;
};
