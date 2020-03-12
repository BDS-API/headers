#pragma once

#include <string>


class LegacyPackIdVersion {

public:
    ~LegacyPackIdVersion();
    void getUpgradedPackId()const;
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion(std::string const&, std::string const&);
    LegacyPackIdVersion(LegacyPackIdVersion &&);
};
