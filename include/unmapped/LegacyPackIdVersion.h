#pragma once

#include "./LegacyPackIdVersion.h"
#include <string>


class LegacyPackIdVersion {

public:

    LegacyPackIdVersion(LegacyPackIdVersion const&);
    ~LegacyPackIdVersion();
    LegacyPackIdVersion(LegacyPackIdVersion &&);
    LegacyPackIdVersion(std::string const&, std::string const&);
    void getUpgradedPackId()const;
};
