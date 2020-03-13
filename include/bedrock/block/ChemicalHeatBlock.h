#pragma once

#include <string>
#include "BlockLegacy.h"


class ChemicalHeatBlock : BlockLegacy {

public:
    ~ChemicalHeatBlock(); // _ZN17ChemicalHeatBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17ChemicalHeatBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK17ChemicalHeatBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK17ChemicalHeatBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void getExtraRenderLayers()const; // _ZNK17ChemicalHeatBlock20getExtraRenderLayersEv
    ChemicalHeatBlock(std::string const&, int); // _ZN17ChemicalHeatBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getRelativeOffsets(); // _ZN17ChemicalHeatBlock19_getRelativeOffsetsEv
    void _melt(BlockSource &, BlockPos const&, Random &)const; // _ZNK17ChemicalHeatBlock5_meltER11BlockSourceRK8BlockPosR6Random
    void _queueTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17ChemicalHeatBlock10_queueTickER11BlockSourceRK8BlockPosR6Random
};
