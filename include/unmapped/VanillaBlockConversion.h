#pragma once

#include <string>


namespace VanillaBlockConversion {

    void getBlockTypeLegacyIdFromName(std::string const&);
    void tryGetLegacyState(unsigned int, unsigned int);
    void getBlockTypeFromLegacyId(unsigned int);
};
