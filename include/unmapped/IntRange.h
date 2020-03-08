#pragma once

#include "../bedrock/util/Random"
#include "../json/Value"


class IntRange {

public:
    static long ZERO;


    IntRange(void);
    IntRange(int);
    IntRange(int, int);
    void getValue(Random &)const;
    bool isInRangeInclusive(int)const;
    bool isInRangeExclusive(int)const;
    void parseJson(Json::Value, int, int);
};
