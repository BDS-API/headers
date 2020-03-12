#pragma once

#include <string>
#include "BlockLegacy.h"


class BaseRailBlock : BlockLegacy {

public:
    class Rail;

    static long DIR_FLAT_Z;
    static long DIR_FLAT_X;

    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid()const;
    virtual bool canSpawnOn()const;
    virtual bool isWaterBlocking()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~BaseRailBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isRailBlock()const;
    virtual void waterSpreadCausesSpawn()const;
    void _blockStillExists(BlockSource const&, BlockPos const&)const;
    bool isRail(Block const&);
    void _updatePlacement(BlockSource &, BlockPos const&)const;
    void updateDir(BlockSource &, BlockPos const&, bool)const;
    BaseRailBlock(std::string const&, int, bool);
    bool isRail(BlockSource &, BlockPos const&);
    void _isFacingWestEast(BlockSource &, BlockPos const&);
    void _canSurvive(BlockSource const&, BlockPos const&)const;
    bool isUsesDataBit()const;
    void _createCircuitComponent(BlockSource &, BlockPos const&);
    class Rail {

    public:
        void place(int, bool);
        bool hasConnection(BlockPos const&);
        bool hasNeighborRail(BlockPos const&);
        bool connectsTo(BaseRailBlock::Rail &);
        void updateConnections(int);
        void connectTo(BaseRailBlock::Rail &);
        Rail(BlockSource &, BlockPos const&);
        void removeSoftConnections();
        ~Rail();
        void getRail(BlockPos const&);
        bool canConnectTo(BaseRailBlock::Rail &);
    };
};
