#pragma once

#include <string>


class LegacyPackIdVersion {

public:
    void getUpgradedPackId()const;
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    ~LegacyPackIdVersion();
    LegacyPackIdVersion(std::string const&, std::string const&);
    LegacyPackIdVersion(LegacyPackIdVersion &&);
};
