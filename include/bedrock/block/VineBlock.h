#pragma once

#include <string>
#include "BlockLegacy.h"


class VineBlock : BlockLegacy {

public:
    static long VINE_SOUTH;
    static long VINE_NORTH;
    static long VINE_EAST;
    static long VINE_WEST;
    static long VINE_ALL;

    ~VineBlock(); // _ZN9VineBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9VineBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9VineBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK9VineBlock22waterSpreadCausesSpawnEv
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK9VineBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9VineBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9VineBlock16getResourceCountER6RandomRK5Blocki
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK9VineBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK9VineBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK9VineBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK9VineBlock8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9VineBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK9VineBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    void _getFacingData(int); // _ZN9VineBlock14_getFacingDataEi
    VineBlock(std::string const&, int); // _ZN9VineBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _isAcceptableNeighbor(Block const&)const; // _ZNK9VineBlock21_isAcceptableNeighborERK5Block
    void updateSurvival(BlockSource &, BlockPos const&)const; // _ZNK9VineBlock14updateSurvivalER11BlockSourceRK8BlockPos
};
