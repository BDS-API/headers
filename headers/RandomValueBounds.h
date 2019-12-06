#pragma once

class RandomValueBounds {

public:

    void RandomValueBounds(void);
    void getMin(void)const;
    void getMax(void)const;
    void getInt(Random &)const;
    void getFloat(Random &)const;
    void matchesValue(int)const;
    void deserialize(Json::Value);
};
