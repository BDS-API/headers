#pragma once

#include "../json/Value"
#include "../bedrock/util/Random"


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
