#pragma once

#include "RotatedPillarBlock.h"
#include <string>


class WoodBlock : RotatedPillarBlock {

public:
    ~WoodBlock(); // _ZN9WoodBlockD2Ev
    virtual bool isStrippable(Block const&)const; // _ZNK9WoodBlock12isStrippableERK5Block
    virtual void getStrippedBlock(Block const&)const; // _ZNK9WoodBlock16getStrippedBlockERK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9WoodBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9WoodBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9WoodBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK9WoodBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK9WoodBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK9WoodBlock24getSilkTouchItemInstanceERK5Block
    WoodBlock(std::string const&, int); // _ZN9WoodBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _createBlockWithStates(Block const&)const; // _ZNK9WoodBlock22_createBlockWithStatesERK5Block
};
