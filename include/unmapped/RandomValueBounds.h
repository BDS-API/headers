#pragma once

#include "../bedrock/util/Random"
#include "../json/Value"


class RandomValueBounds {

public:

    RandomValueBounds(void);
    void getMin()const;
    void getMax()const;
    void getInt(Random &)const;
    void getFloat(Random &)const;
    bool matchesValue(int)const;
    void deserialize(Json::Value);
};
