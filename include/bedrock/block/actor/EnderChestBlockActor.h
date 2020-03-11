#pragma once

#include "./ChestBlockActor.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../unmapped/BlockSource.h"
#include <string>


class EnderChestBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual ~EnderChestBlockActor();
    virtual std::string getName()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

//  EnderChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
    void createEnderChestBlockEntity(BlockPos const&);
};
