#pragma once

#include "./TropicalFishInfo.h"
#include <string>


class TropicalFishInfo {

public:

    TropicalFishInfo(int, int, int, int, std::string);
    ~TropicalFishInfo();
    TropicalFishInfo(TropicalFishInfo const&);
};
