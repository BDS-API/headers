#pragma once



class CommandIntegerRange {

public:

    CommandIntegerRange();
    CommandIntegerRange(int, int, bool);
    bool isWithinRange(int)const;
    void getMinValue()const;
    void getMaxValue()const;
    void getInverted()const;
};
