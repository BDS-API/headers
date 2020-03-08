#pragma once

#include "../bedrock/util/Random"
#include "../json/Value"


class FloatRange {

public:

    FloatRange(void);
    void getValue(Random &)const;
    void parseJson(Json::Value const&, float, float);
};
