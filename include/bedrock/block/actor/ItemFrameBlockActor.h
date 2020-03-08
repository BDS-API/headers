#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../../../unmapped/DataLoadHelper"


class ItemFrameBlockActor : BlockActor {

public:
    static long ROTATION_DEGREES;

    virtual ItemFrameBlockActor::~ItemFrameBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    ItemFrameBlockActor(BlockPos);
    ItemFrameBlockActor(BlockPos, BlockActorType);
    void _updateMapBit(BlockSource &);
    void updateNameTag();
    void getClockFrame();
    void getCompassFrame();
    void getFramedItem();
    void getRotation();
    void rotateFramedItem();
    void dropFramedItem(BlockSource &, bool);
    void _checkMapRemoval(BlockSource &, ItemInstance &);
    void actuallyDropItem(BlockSource &, bool);
    void setItem(BlockSource &, ItemInstance const&);
};
