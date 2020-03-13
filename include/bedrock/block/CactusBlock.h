#pragma once

#include <string>
#include "BlockLegacy.h"


class CactusBlock : BlockLegacy {

public:
    ~CactusBlock(); // _ZN11CactusBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11CactusBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11CactusBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11CactusBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11CactusBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK11CactusBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK11CactusBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN11CactusBlock21onGraphicsModeChangedEbbb
    virtual bool canBeSilkTouched()const; // _ZNK11CactusBlock16canBeSilkTouchedEv
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const; // _ZNK11CactusBlock18dealsContactDamageERK5ActorRK5Blockb
    CactusBlock(std::string const&, int); // _ZN11CactusBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _checkAlive(BlockSource &, BlockPos const&)const; // _ZNK11CactusBlock11_checkAliveER11BlockSourceRK8BlockPos
};
