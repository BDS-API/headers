#pragma once

#include <string>


class LegacyPackIdVersion {

public:
    LegacyPackIdVersion(LegacyPackIdVersion const&); // _ZN19LegacyPackIdVersionC2ERKS_
    ~LegacyPackIdVersion(); // _ZN19LegacyPackIdVersionD2Ev
    LegacyPackIdVersion(LegacyPackIdVersion &&); // _ZN19LegacyPackIdVersionC2EOS_
    LegacyPackIdVersion(std::string const&, std::string const&); // _ZN19LegacyPackIdVersionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void getUpgradedPackId()const; // _ZNK19LegacyPackIdVersion17getUpgradedPackIdEv
};
