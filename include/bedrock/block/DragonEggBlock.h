#pragma once

#include <string>
#include "HeavyBlock.h"


class DragonEggBlock : HeavyBlock {

public:
    ~DragonEggBlock(); // _ZN14DragonEggBlockD2Ev
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK14DragonEggBlock19breaksFallingBlocksERK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK14DragonEggBlock3useER6PlayerRK8BlockPos
    virtual void attack(Player *, BlockPos const&)const; // _ZNK14DragonEggBlock6attackEP6PlayerRK8BlockPos
    virtual void getDustColor(Block const&)const; // _ZNK14DragonEggBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK14DragonEggBlock19getDustParticleNameB5cxx11ERK5Block
    DragonEggBlock(std::string const&, int); // _ZN14DragonEggBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _teleport(BlockSource &, Random &, BlockPos const&)const; // _ZNK14DragonEggBlock9_teleportER11BlockSourceR6RandomRK8BlockPos
};
