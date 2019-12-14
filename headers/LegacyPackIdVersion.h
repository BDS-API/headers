#pragma once

class LegacyPackIdVersion {

public:

    void LegacyPackIdVersion(LegacyPackIdVersion const&);
    void LegacyPackIdVersion(LegacyPackIdVersion&&);
    void LegacyPackIdVersion(std::string const&, std::string const&);
    void getUpgradedPackId(void)const;
};
