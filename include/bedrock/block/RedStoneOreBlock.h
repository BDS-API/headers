#pragma once

#include <string>
#include "BlockLegacy.h"


class RedStoneOreBlock : BlockLegacy {

public:
    ~RedStoneOreBlock(); // _ZN16RedStoneOreBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16RedStoneOreBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void onStepOn(Actor &, BlockPos const&)const; // _ZNK16RedStoneOreBlock8onStepOnER5ActorRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK16RedStoneOreBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK16RedStoneOreBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16RedStoneOreBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK16RedStoneOreBlock3useER6PlayerRK8BlockPos
    virtual void attack(Player *, BlockPos const&)const; // _ZNK16RedStoneOreBlock6attackEP6PlayerRK8BlockPos
    virtual void getExperienceDrop(Random &)const; // _ZNK16RedStoneOreBlock17getExperienceDropER6Random
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16RedStoneOreBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK16RedStoneOreBlock24getSilkTouchItemInstanceERK5Block
    RedStoneOreBlock(std::string const&, int, bool); // _ZN16RedStoneOreBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void _interact(BlockSource &, BlockPos const&)const; // _ZNK16RedStoneOreBlock9_interactER11BlockSourceRK8BlockPos
    void _poofParticles(BlockSource &, BlockPos const&)const; // _ZNK16RedStoneOreBlock14_poofParticlesER11BlockSourceRK8BlockPos
};
