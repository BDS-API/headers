#pragma once

#include <string>
#include "BlockLegacy.h"


class TntBlock : BlockLegacy {

public:
    ~TntBlock(); // _ZN8TntBlockD2Ev
    virtual void shouldDispense(BlockSource &, Container &)const; // _ZNK8TntBlock14shouldDispenseER11BlockSourceR9Container
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK8TntBlock8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK8TntBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const; // _ZNK8TntBlock10onExplodedER11BlockSourceRK8BlockPosP5Actor
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK8TntBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK8TntBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const; // _ZNK8TntBlock7destroyER11BlockSourceRK8BlockPosRK5BlockP5Actor
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8TntBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK8TntBlock15getResourceItemER6RandomRK5Blocki
    virtual void use(Player &, BlockPos const&)const; // _ZNK8TntBlock3useER6PlayerRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK8TntBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK8TntBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK8TntBlock10getVariantERK5Block
    TntBlock(std::string const&, int); // _ZN8TntBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _shouldAllowUnderwater(Block const&)const; // _ZNK8TntBlock22_shouldAllowUnderwaterERK5Block
    void _setAllowUnderwater(Actor *)const; // _ZNK8TntBlock19_setAllowUnderwaterEP5Actor
};
