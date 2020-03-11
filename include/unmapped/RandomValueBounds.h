#pragma once

#include "../bedrock/util/Random.h"
#include "../json/Value.h"


class RandomValueBounds {

public:

    RandomValueBounds();
    void getMin()const;
    void getMax()const;
    void getInt(Random &)const;
    void getFloat(Random &)const;
    bool matchesValue(int)const;
    void deserialize(Json::Value);
};
