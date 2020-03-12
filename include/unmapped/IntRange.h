#pragma once

#include "../bedrock/util/Random.h"
#include "../json/Value.h"


class IntRange {

public:
    static long ZERO;

    IntRange(int);
    bool isInRangeExclusive(int)const;
    IntRange(int, int);
    void parseJson(Json::Value, int, int);
    void getValue(Random &)const;
    IntRange();
    bool isInRangeInclusive(int)const;
};
