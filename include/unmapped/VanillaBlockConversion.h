#pragma once

#include <string>


class VanillaBlockConversion {

public:

    void getBlockTypeFromLegacyId(unsigned int);
    void getBlockTypeLegacyIdFromName(std::string const&);
    void tryGetLegacyState(unsigned int, unsigned int);
};
