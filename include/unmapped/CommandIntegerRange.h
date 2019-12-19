#pragma once

class CommandIntegerRange {

public:

    CommandIntegerRange(void);
    CommandIntegerRange(int, int, bool);
    bool isWithinRange(int)const;
    void getMinValue(void)const;
    void getMaxValue(void)const;
    void getInverted(void)const;
};
