#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "ActorBlock.h"
#include "../actor/Player.h"


class NoteBlock : ActorBlock {

public:
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    ~NoteBlock();
    virtual bool isInteractiveBlock()const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    void getPitch(int)const;
    NoteBlock(std::string const&, int);
    std::string getSoundName(int)const;
};
