#pragma once

#include <string>


class TropicalFishInfo {

public:
    TropicalFishInfo(TropicalFishInfo const&);
    TropicalFishInfo(int, int, int, int, std::string);
    ~TropicalFishInfo();
};
