#pragma once

#include <string>
#include "ActorBlock.h"


class BannerBlock : ActorBlock {

public:
    static long STANDING_AABB;
    static long NORTH_AABB;
    static long SOUTH_AABB;
    static long EAST_AABB;
    static long WEST_AABB;

    ~BannerBlock(); // _ZN11BannerBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11BannerBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11BannerBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK11BannerBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11BannerBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK11BannerBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11BannerBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BannerBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK11BannerBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11BannerBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK11BannerBlock10getVariantERK5Block
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK11BannerBlock21getEntityResourceItemER6RandomRK10BlockActori
    BannerBlock(std::string const&, int, bool); // _ZN11BannerBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void getShape(int, AABB &)const; // _ZNK11BannerBlock8getShapeEiR4AABB
    void _itemInstanceFromBlockEntity(BannerBlockActor const*)const; // _ZNK11BannerBlock28_itemInstanceFromBlockEntityEPK16BannerBlockActor
};
