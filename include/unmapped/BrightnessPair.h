#pragma once

#include "../bedrock/util/Brightness.h"


class BrightnessPair {

public:
    BrightnessPair(BrightnessPair const&);
    BrightnessPair(Brightness, Brightness);
};
