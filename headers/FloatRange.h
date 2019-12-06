#pragma once

class FloatRange {

public:

    void FloatRange(void);
    void getValue(Random &)const;
    void parseJson(Json::Value const&, float, float);
};
