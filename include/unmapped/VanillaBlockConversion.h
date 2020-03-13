#pragma once

#include <string>


namespace VanillaBlockConversion {

    void getBlockTypeFromLegacyId(unsigned int); // _ZN22VanillaBlockConversion24getBlockTypeFromLegacyIdEj
    void getBlockTypeLegacyIdFromName(std::string const&); // _ZN22VanillaBlockConversion28getBlockTypeLegacyIdFromNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tryGetLegacyState(unsigned int, unsigned int); // _ZN22VanillaBlockConversion17tryGetLegacyStateEjj
};
