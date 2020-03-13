#pragma once

#include <string>
#include "TorchBlock.h"


class ColoredTorchBlock : TorchBlock {

public:
    ~ColoredTorchBlock(); // _ZN17ColoredTorchBlockD2Ev
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK17ColoredTorchBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17ColoredTorchBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17ColoredTorchBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK17ColoredTorchBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK17ColoredTorchBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK17ColoredTorchBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK17ColoredTorchBlock10getVariantERK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17ColoredTorchBlock11animateTickER11BlockSourceRK8BlockPosR6Random
//  ColoredTorchBlock(std::string const&, int, ColoredTorchColor); //TODO: incomplete function definition // _ZN17ColoredTorchBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi17ColoredTorchColor
    void _getColor(Block const&)const; // _ZNK17ColoredTorchBlock9_getColorERK5Block
//  void getItemForColor(ColoredTorchColor); //TODO: incomplete function definition // _ZN17ColoredTorchBlock15getItemForColorE17ColoredTorchColor
};
