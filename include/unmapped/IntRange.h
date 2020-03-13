#pragma once

#include "../json/Value.h"


class IntRange {

public:
    static long ZERO;

    IntRange(); // _ZN8IntRangeC2Ev
    IntRange(int); // _ZN8IntRangeC2Ei
    IntRange(int, int); // _ZN8IntRangeC2Eii
    void getValue(Random &)const; // _ZNK8IntRange8getValueER6Random
    bool isInRangeInclusive(int)const; // _ZNK8IntRange18isInRangeInclusiveEi
    bool isInRangeExclusive(int)const; // _ZNK8IntRange18isInRangeExclusiveEi
    void parseJson(Json::Value, int, int); // _ZN8IntRange9parseJsonEN4Json5ValueEii
};
