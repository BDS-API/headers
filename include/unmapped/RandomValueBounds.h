#pragma once

#include "../json/Value.h"


class RandomValueBounds {

public:
    void getFloat(Random &)const;
    bool matchesValue(int)const;
    void getInt(Random &)const;
    void getMin()const;
    void getMax()const;
    void deserialize(Json::Value);
    RandomValueBounds();
};
