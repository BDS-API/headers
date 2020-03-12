#pragma once

#include <string>
#include "../../item/ItemInstance.h"
#include "ChestBlockActor.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class EnderChestBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    ~EnderChestBlockActor();
    virtual void playCloseSound(BlockSource &);
    virtual void playOpenSound(BlockSource &);
    virtual std::string getName()const;
    void createEnderChestBlockEntity(BlockPos const&);
//  EnderChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
};
