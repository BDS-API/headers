#pragma once

#include "../json/Value"


class RandomValueBounds {

public:

    RandomValueBounds(void);
    void getMin(void)const;
    void getMax(void)const;
    void getInt(Random &)const;
    void getFloat(Random &)const;
    bool matchesValue(int)const;
    void deserialize(Json::Value);
};
