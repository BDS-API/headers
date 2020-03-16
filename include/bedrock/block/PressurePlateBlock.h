#pragma once

#include <string>
#include "BasePressurePlateBlock.h"


class PressurePlateBlock : public BasePressurePlateBlock {

public:
    virtual ~PressurePlateBlock(); // _ZN18PressurePlateBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK18PressurePlateBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const; // _ZNK18PressurePlateBlock17getSignalStrengthER11BlockSourceRK8BlockPos
    virtual void getSignalForData(int)const; // _ZNK18PressurePlateBlock16getSignalForDataEi
    virtual void getRedstoneSignal(int)const; // _ZNK18PressurePlateBlock17getRedstoneSignalEi
//    PressurePlateBlock(std::string const&, int, Material const&, long); //TODO: incomplete function definition // _ZN18PressurePlateBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8MaterialNS_11SensitivityE
};
