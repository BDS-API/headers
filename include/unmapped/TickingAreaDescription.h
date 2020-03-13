#pragma once

#include <string>


class TickingAreaDescription {

public:
    ~TickingAreaDescription(); // _ZN22TickingAreaDescriptionD2Ev
    TickingAreaDescription(TickingAreaDescription &&); // _ZN22TickingAreaDescriptionC2EOS_
    TickingAreaDescription(TickingAreaDescription const&); // _ZN22TickingAreaDescriptionC2ERKS_
    TickingAreaDescription(BlockPos const&, unsigned int, std::string const&); // _ZN22TickingAreaDescriptionC2ERK8BlockPosjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&); // _ZN22TickingAreaDescriptionC2ERK8BlockPosS2_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string asString()const; // _ZNK22TickingAreaDescription8asStringB5cxx11Ev
};
