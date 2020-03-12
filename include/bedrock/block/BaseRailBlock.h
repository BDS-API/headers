#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class BaseRailBlock : BlockLegacy {

public:
    class Rail;

    static long DIR_FLAT_Z;
    static long DIR_FLAT_X;

    virtual bool canContainLiquid()const;
    ~BaseRailBlock();
    virtual bool canSpawnOn()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isRailBlock()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    void _updatePlacement(BlockSource &, BlockPos const&)const;
    void _isFacingWestEast(BlockSource &, BlockPos const&);
    void _canSurvive(BlockSource const&, BlockPos const&)const;
    void _createCircuitComponent(BlockSource &, BlockPos const&);
    bool isRail(Block const&);
    void updateDir(BlockSource &, BlockPos const&, bool)const;
    BaseRailBlock(std::string const&, int, bool);
    bool isRail(BlockSource &, BlockPos const&);
    void _blockStillExists(BlockSource const&, BlockPos const&)const;
    bool isUsesDataBit()const;
    class Rail {

    public:
        void place(int, bool);
        void updateConnections(int);
        void getRail(BlockPos const&);
        Rail(BlockSource &, BlockPos const&);
        bool hasConnection(BlockPos const&);
        bool canConnectTo(BaseRailBlock::Rail &);
        ~Rail();
        bool hasNeighborRail(BlockPos const&);
        void removeSoftConnections();
        bool connectsTo(BaseRailBlock::Rail &);
        void connectTo(BaseRailBlock::Rail &);
    };
};
