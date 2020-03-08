#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../actor/Player"


class NoteBlock : ActorBlock {

public:
    NoteBlock::~NoteBlock()
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;

    NoteBlock(std::string const&, int);
    void getPitch(int)const;
};
