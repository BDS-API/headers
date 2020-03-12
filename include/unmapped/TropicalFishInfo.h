#pragma once

#include <string>


class TropicalFishInfo {

public:
    ~TropicalFishInfo();
    TropicalFishInfo(int, int, int, int, std::string);
    TropicalFishInfo(TropicalFishInfo const&);
};
