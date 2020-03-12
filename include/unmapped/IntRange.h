#pragma once

#include "../json/Value.h"


class IntRange {

public:
    static long ZERO;

    IntRange(int);
    bool isInRangeExclusive(int)const;
    void getValue(Random &)const;
    void parseJson(Json::Value, int, int);
    bool isInRangeInclusive(int)const;
    IntRange();
    IntRange(int, int);
};
