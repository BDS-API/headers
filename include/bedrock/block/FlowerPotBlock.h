#pragma once

#include <string>
#include "ActorBlock.h"


class FlowerPotBlock : ActorBlock {

public:
    ~FlowerPotBlock(); // _ZN14FlowerPotBlockD2Ev
    virtual bool isInteractiveBlock()const; // _ZNK14FlowerPotBlock18isInteractiveBlockEv
    virtual bool isValidAuxValue(int)const; // _ZNK14FlowerPotBlock15isValidAuxValueEi
    virtual void waterSpreadCausesSpawn()const; // _ZNK14FlowerPotBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK14FlowerPotBlock16canContainLiquidEv
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK14FlowerPotBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK14FlowerPotBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK14FlowerPotBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK14FlowerPotBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK14FlowerPotBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14FlowerPotBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14FlowerPotBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK14FlowerPotBlock3useER6PlayerRK8BlockPos
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK14FlowerPotBlock10canSurviveER11BlockSourceRK8BlockPos
    FlowerPotBlock(std::string const&, int); // _ZN14FlowerPotBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isCubeShaped(); // _ZN14FlowerPotBlock12isCubeShapedEv
    bool isSolidRender()const; // _ZNK14FlowerPotBlock13isSolidRenderEv
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const; // _ZNK14FlowerPotBlock18getFlowerPotEntityER11BlockSourceRK8BlockPos
    bool isSupportedBlock(Block const&)const; // _ZNK14FlowerPotBlock16isSupportedBlockERK5Block
};
