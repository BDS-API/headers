#pragma once

#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../item/ItemInstance"


class EnderChestBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    EnderChestBlockActor::~EnderChestBlockActor()
    virtual void getName()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    EnderChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&);
    void createEnderChestBlockEntity(BlockPos const&);
};
