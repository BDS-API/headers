#pragma once

#include <string>
#include "ActorBlock.h"


class NoteBlock : ActorBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual bool isInteractiveBlock()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~NoteBlock();
    std::string getSoundName(int)const;
    NoteBlock(std::string const&, int);
    void getPitch(int)const;
};
