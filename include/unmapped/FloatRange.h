#pragma once

#include "../bedrock/util/Random.h"
#include "../json/Value.h"


class FloatRange {

public:

    FloatRange();
    void getValue(Random &)const;
    void parseJson(Json::Value const&, float, float);
};
