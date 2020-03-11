#pragma once

#include "../bedrock/util/Brightness.h"
#include "./BrightnessPair.h"


class BrightnessPair {

public:

    BrightnessPair(BrightnessPair const&);
    BrightnessPair(Brightness, Brightness);
};
