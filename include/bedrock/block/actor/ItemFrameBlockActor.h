#pragma once

#include "BlockActor.h"
#include "../../util/BlockPos.h"


class ItemFrameBlockActor : BlockActor {

public:
    static long ROTATION_DEGREES;

    ~ItemFrameBlockActor(); // _ZN19ItemFrameBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN19ItemFrameBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK19ItemFrameBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN19ItemFrameBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN19ItemFrameBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN19ItemFrameBlockActor15getUpdatePacketER11BlockSource
    virtual void getShadowRadius(BlockSource &)const; // _ZNK19ItemFrameBlockActor15getShadowRadiusER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN19ItemFrameBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    ItemFrameBlockActor(BlockPos); // _ZN19ItemFrameBlockActorC2E8BlockPos
//  ItemFrameBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition // _ZN19ItemFrameBlockActorC2E8BlockPos14BlockActorType
    void _updateMapBit(BlockSource &); // _ZN19ItemFrameBlockActor13_updateMapBitER11BlockSource
    void updateNameTag(); // _ZN19ItemFrameBlockActor13updateNameTagEv
    void getClockFrame(); // _ZN19ItemFrameBlockActor13getClockFrameEv
    void getCompassFrame(); // _ZN19ItemFrameBlockActor15getCompassFrameEv
    void getFramedItem(); // _ZN19ItemFrameBlockActor13getFramedItemEv
    void getRotation(); // _ZN19ItemFrameBlockActor11getRotationEv
    void rotateFramedItem(); // _ZN19ItemFrameBlockActor16rotateFramedItemEv
    void dropFramedItem(BlockSource &, bool); // _ZN19ItemFrameBlockActor14dropFramedItemER11BlockSourceb
    void _checkMapRemoval(BlockSource &, ItemInstance &); // _ZN19ItemFrameBlockActor16_checkMapRemovalER11BlockSourceR12ItemInstance
    void actuallyDropItem(BlockSource &, bool); // _ZN19ItemFrameBlockActor16actuallyDropItemER11BlockSourceb
    void setItem(BlockSource &, ItemInstance const&); // _ZN19ItemFrameBlockActor7setItemER11BlockSourceRK12ItemInstance
};
