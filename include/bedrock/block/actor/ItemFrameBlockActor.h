#pragma once

#include "../../util/BlockPos.h"
#include "BlockActor.h"


class ItemFrameBlockActor : BlockActor {

public:
    static long ROTATION_DEGREES;

    virtual void getShadowRadius(BlockSource &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~ItemFrameBlockActor();
    virtual void onChanged(BlockSource &);
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &)const;
    void dropFramedItem(BlockSource &, bool);
    void actuallyDropItem(BlockSource &, bool);
    void _checkMapRemoval(BlockSource &, ItemInstance &);
    void getClockFrame();
    void updateNameTag();
//  ItemFrameBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    ItemFrameBlockActor(BlockPos);
    void getFramedItem();
    void getCompassFrame();
    void setItem(BlockSource &, ItemInstance const&);
    void rotateFramedItem();
    void _updateMapBit(BlockSource &);
    void getRotation();
};
