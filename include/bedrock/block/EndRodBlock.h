#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class EndRodBlock : BlockLegacy {

public:
    ~EndRodBlock(); // _ZN11EndRodBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK11EndRodBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK11EndRodBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11EndRodBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK11EndRodBlock19breaksFallingBlocksERK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11EndRodBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11EndRodBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK11EndRodBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11EndRodBlock14getVisualShapeERK5BlockR4AABBb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11EndRodBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    EndRodBlock(std::string const&, int); // _ZN11EndRodBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _shouldMirror(unsigned char, unsigned char)const; // _ZNK11EndRodBlock13_shouldMirrorEhh
    void _mirror(unsigned char)const; // _ZNK11EndRodBlock7_mirrorEh
    void _shapeFromDirection(Vec3 &, Vec3 &, int)const; // _ZNK11EndRodBlock19_shapeFromDirectionER4Vec3S1_i
    bool canStandOn(BlockSource &, BlockPos const&)const; // _ZNK11EndRodBlock10canStandOnER11BlockSourceRK8BlockPos
};
