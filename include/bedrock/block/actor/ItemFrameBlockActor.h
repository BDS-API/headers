#pragma once

#include "BlockActor.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class ItemFrameBlockActor : BlockActor {

public:
    static long ROTATION_DEGREES;

    virtual void getShadowRadius(BlockSource &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    ~ItemFrameBlockActor();
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void save(CompoundTag &)const;
    void getClockFrame();
//  ItemFrameBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    void getFramedItem();
    void getRotation();
    void getCompassFrame();
    void rotateFramedItem();
    void setItem(BlockSource &, ItemInstance const&);
    void _checkMapRemoval(BlockSource &, ItemInstance &);
    void _updateMapBit(BlockSource &);
    void actuallyDropItem(BlockSource &, bool);
    ItemFrameBlockActor(BlockPos);
    void dropFramedItem(BlockSource &, bool);
    void updateNameTag();
};
