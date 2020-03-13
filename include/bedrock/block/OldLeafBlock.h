#pragma once

#include <string>
#include "LeafBlock.h"


class OldLeafBlock : LeafBlock {

public:
    ~OldLeafBlock(); // _ZN12OldLeafBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12OldLeafBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12OldLeafBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12OldLeafBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK12OldLeafBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK12OldLeafBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK12OldLeafBlock28isAuxValueRelevantForPickingEv
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12OldLeafBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK12OldLeafBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK12OldLeafBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12OldLeafBlock24getSilkTouchItemInstanceERK5Block
    virtual void getExtraResourceItem(Block const&)const; // _ZNK12OldLeafBlock20getExtraResourceItemERK5Block
//  OldLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN12OldLeafBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi7WeakPtrI11BlockLegacyE
};
