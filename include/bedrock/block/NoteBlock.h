#pragma once

#include <string>
#include "ActorBlock.h"


class NoteBlock : ActorBlock {

public:
    ~NoteBlock(); // _ZN9NoteBlockD2Ev
    virtual bool isInteractiveBlock()const; // _ZNK9NoteBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9NoteBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK9NoteBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK9NoteBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void use(Player &, BlockPos const&)const; // _ZNK9NoteBlock3useER6PlayerRK8BlockPos
    virtual void attack(Player *, BlockPos const&)const; // _ZNK9NoteBlock6attackEP6PlayerRK8BlockPos
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const; // _ZNK9NoteBlock12triggerEventER11BlockSourceRK8BlockPosii
    NoteBlock(std::string const&, int); // _ZN9NoteBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    std::string getSoundName(int)const; // _ZNK9NoteBlock12getSoundNameB5cxx11Ei
    void getPitch(int)const; // _ZNK9NoteBlock8getPitchEi
};
