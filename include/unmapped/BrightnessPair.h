#pragma once

#include "../bedrock/util/Brightness"


class BrightnessPair {

public:

    BrightnessPair(BrightnessPair const&);
    BrightnessPair(Brightness, Brightness);
};
