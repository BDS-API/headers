#pragma once

#include "../json/Value.h"


class RandomValueBounds {

public:
    RandomValueBounds(); // _ZN17RandomValueBoundsC2Ev
    void getMin()const; // _ZNK17RandomValueBounds6getMinEv
    void getMax()const; // _ZNK17RandomValueBounds6getMaxEv
    void getInt(Random &)const; // _ZNK17RandomValueBounds6getIntER6Random
    void getFloat(Random &)const; // _ZNK17RandomValueBounds8getFloatER6Random
    bool matchesValue(int)const; // _ZNK17RandomValueBounds12matchesValueEi
    void deserialize(Json::Value); // _ZN17RandomValueBounds11deserializeEN4Json5ValueE
};
