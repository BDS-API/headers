#pragma once

#include "unmapped/BlockSource.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include <string>


class NoteBlock : ActorBlock {

public:
    virtual ~NoteBlock();
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;

    NoteBlock(std::string const&, int);
    std::string getSoundName(int)const;
    void getPitch(int)const;
};
