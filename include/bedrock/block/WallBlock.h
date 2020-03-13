#pragma once

#include <string>
#include "BlockLegacy.h"


class WallBlock : BlockLegacy {

public:
    static long WALL_WIDTH;
    static long WALL_HEIGHT;
    static long POST_WIDTH;
    static long POST_HEIGHT;
    static std::string WALL_NAMES;

    ~WallBlock(); // _ZN9WallBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9WallBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK9WallBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK9WallBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK9WallBlock10canConnectERK5BlockhS2_
    virtual bool isWallBlock()const; // _ZNK9WallBlock11isWallBlockEv
    virtual bool canContainLiquid()const; // _ZNK9WallBlock16canContainLiquidEv
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9WallBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9WallBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK9WallBlock28isAuxValueRelevantForPickingEv
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK9WallBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK9WallBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK9WallBlock16canBeSilkTouchedEv
    WallBlock(std::string const&, int, Material const&); // _ZN9WallBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    WallBlock(std::string const&, int, BlockLegacy const&); // _ZN9WallBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK11BlockLegacy
};
