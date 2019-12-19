#pragma once

class FloatRange {

public:

    FloatRange(void);
    void getValue(Random &)const;
    void parseJson(Json::Value const&, float, float);
};
