#pragma once

#include <string>
#include "ActorBlock.h"


class DaylightDetectorBlock : ActorBlock {

public:
    ~DaylightDetectorBlock(); // _ZN21DaylightDetectorBlockD2Ev
    virtual bool isInteractiveBlock()const; // _ZNK21DaylightDetectorBlock18isInteractiveBlockEv
    virtual bool isSignalSource()const; // _ZNK21DaylightDetectorBlock14isSignalSourceEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK21DaylightDetectorBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK21DaylightDetectorBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK21DaylightDetectorBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK21DaylightDetectorBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK21DaylightDetectorBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK21DaylightDetectorBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK21DaylightDetectorBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK21DaylightDetectorBlock3useER6PlayerRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK21DaylightDetectorBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK21DaylightDetectorBlock24getSilkTouchItemInstanceERK5Block
    virtual void updateShape(BlockSource &, BlockPos const&); // _ZN21DaylightDetectorBlock11updateShapeER11BlockSourceRK8BlockPos
    virtual void updateSignalStrength(BlockSource &, BlockPos const&)const; // _ZNK21DaylightDetectorBlock20updateSignalStrengthER11BlockSourceRK8BlockPos
    DaylightDetectorBlock(std::string const&, int, bool); // _ZN21DaylightDetectorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
};
