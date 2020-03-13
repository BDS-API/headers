#pragma once

#include <string>
#include "BasePressurePlateBlock.h"


class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long MAX_WEIGHT_LIGHT;
    static long MAX_WEIGHT_HEAVY;

    ~WeightedPressurePlateBlock(); // _ZN26WeightedPressurePlateBlockD2Ev
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK26WeightedPressurePlateBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getTickDelay()const; // _ZNK26WeightedPressurePlateBlock12getTickDelayEv
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const; // _ZNK26WeightedPressurePlateBlock17getSignalStrengthER11BlockSourceRK8BlockPos
    virtual void getSignalForData(int)const; // _ZNK26WeightedPressurePlateBlock16getSignalForDataEi
    virtual void getRedstoneSignal(int)const; // _ZNK26WeightedPressurePlateBlock17getRedstoneSignalEi
    WeightedPressurePlateBlock(std::string const&, int, Material const&, int); // _ZN26WeightedPressurePlateBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materiali
};
