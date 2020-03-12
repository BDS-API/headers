#pragma once

#include "../bedrock/util/Random.h"
#include "../json/Value.h"


class RandomValueBounds {

public:
    void getInt(Random &)const;
    void getMin()const;
    RandomValueBounds();
    void deserialize(Json::Value);
    void getFloat(Random &)const;
    bool matchesValue(int)const;
    void getMax()const;
};
