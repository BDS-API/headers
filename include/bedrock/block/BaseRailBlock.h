#pragma once

#include <string>
#include "BlockLegacy.h"


class BaseRailBlock : BlockLegacy {

public:
    class Rail;

    static long DIR_FLAT_Z;
    static long DIR_FLAT_X;

    ~BaseRailBlock(); // _ZN13BaseRailBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13BaseRailBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK13BaseRailBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK13BaseRailBlock15isWaterBlockingEv
    virtual bool isRailBlock()const; // _ZNK13BaseRailBlock11isRailBlockEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK13BaseRailBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK13BaseRailBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13BaseRailBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK13BaseRailBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK13BaseRailBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK13BaseRailBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13BaseRailBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK13BaseRailBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13BaseRailBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK13BaseRailBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK13BaseRailBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canSpawnOn()const; // _ZNK13BaseRailBlock10canSpawnOnEv
    bool isRail(BlockSource &, BlockPos const&); // _ZN13BaseRailBlock6isRailER11BlockSourceRK8BlockPos
    void _createCircuitComponent(BlockSource &, BlockPos const&); // _ZN13BaseRailBlock23_createCircuitComponentER11BlockSourceRK8BlockPos
    void _isFacingWestEast(BlockSource &, BlockPos const&); // _ZN13BaseRailBlock17_isFacingWestEastER11BlockSourceRK8BlockPos
    void _canSurvive(BlockSource const&, BlockPos const&)const; // _ZNK13BaseRailBlock11_canSurviveERK11BlockSourceRK8BlockPos
    bool isRail(Block const&); // _ZN13BaseRailBlock6isRailERK5Block
    BaseRailBlock(std::string const&, int, bool); // _ZN13BaseRailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    bool isUsesDataBit()const; // _ZNK13BaseRailBlock13isUsesDataBitEv
    void _updatePlacement(BlockSource &, BlockPos const&)const; // _ZNK13BaseRailBlock16_updatePlacementER11BlockSourceRK8BlockPos
    void _blockStillExists(BlockSource const&, BlockPos const&)const; // _ZNK13BaseRailBlock17_blockStillExistsERK11BlockSourceRK8BlockPos
    void updateDir(BlockSource &, BlockPos const&, bool)const; // _ZNK13BaseRailBlock9updateDirER11BlockSourceRK8BlockPosb
    class Rail {

    public:
        Rail(BlockSource &, BlockPos const&); // _ZN13BaseRailBlock4RailC2ER11BlockSourceRK8BlockPos
        void updateConnections(int); // _ZN13BaseRailBlock4Rail17updateConnectionsEi
        void removeSoftConnections(); // _ZN13BaseRailBlock4Rail21removeSoftConnectionsEv
        void getRail(BlockPos const&); // _ZN13BaseRailBlock4Rail7getRailERK8BlockPos
        bool connectsTo(BaseRailBlock::Rail &); // _ZN13BaseRailBlock4Rail10connectsToERS0_
        bool hasConnection(BlockPos const&); // _ZN13BaseRailBlock4Rail13hasConnectionERK8BlockPos
        bool canConnectTo(BaseRailBlock::Rail &); // _ZN13BaseRailBlock4Rail12canConnectToERS0_
        void connectTo(BaseRailBlock::Rail &); // _ZN13BaseRailBlock4Rail9connectToERS0_
        void place(int, bool); // _ZN13BaseRailBlock4Rail5placeEib
        bool hasNeighborRail(BlockPos const&); // _ZN13BaseRailBlock4Rail15hasNeighborRailERK8BlockPos
        ~Rail(); // _ZN13BaseRailBlock4RailD2Ev
    };
};
