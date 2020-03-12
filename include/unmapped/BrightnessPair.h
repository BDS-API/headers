#pragma once

#include "../bedrock/util/Brightness.h"


class BrightnessPair {

public:
    BrightnessPair(Brightness, Brightness);
    BrightnessPair(BrightnessPair const&);
};
