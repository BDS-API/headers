#pragma once



class FloatRange {

public:
    void getValue(Random &)const;
    void parseJson(Json::Value const&, float, float);
    FloatRange();
};
