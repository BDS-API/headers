#pragma once

#include <string>


namespace VanillaBlockConversion {

    void getBlockTypeFromLegacyId(unsigned int);
    void getBlockTypeLegacyIdFromName(std::string const&);
    void tryGetLegacyState(unsigned int, unsigned int);
};
