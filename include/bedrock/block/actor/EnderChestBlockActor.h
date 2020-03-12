#pragma once

#include <string>
#include "ChestBlockActor.h"


class EnderChestBlockActor : ChestBlockActor {

public:
    static long ITEMS_SIZE;

    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual std::string getName()const;
    virtual void playCloseSound(BlockSource &);
    ~EnderChestBlockActor();
    void createEnderChestBlockEntity(BlockPos const&);
//  EnderChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&); //TODO: incomplete function definition
};
