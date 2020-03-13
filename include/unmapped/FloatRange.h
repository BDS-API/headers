#pragma once



class FloatRange {

public:
    FloatRange(); // _ZN10FloatRangeC2Ev
    void getValue(Random &)const; // _ZNK10FloatRange8getValueER6Random
    void parseJson(Json::Value const&, float, float); // _ZN10FloatRange9parseJsonERKN4Json5ValueEff
};
