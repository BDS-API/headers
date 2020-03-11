#pragma once

#include "../bedrock/util/Random.h"
#include "../json/Value.h"


class IntRange {

public:
    static long ZERO;


    IntRange();
    IntRange(int);
    IntRange(int, int);
    void getValue(Random &)const;
    bool isInRangeInclusive(int)const;
    bool isInRangeExclusive(int)const;
    void parseJson(Json::Value, int, int);
};
