#pragma once

#include <string>
#include "ActorBlock.h"


class ChemistryTableBlock : ActorBlock {

public:
    ~ChemistryTableBlock(); // _ZN19ChemistryTableBlockD2Ev
    virtual bool isCraftingBlock()const; // _ZNK19ChemistryTableBlock15isCraftingBlockEv
    virtual bool isWaterBlocking()const; // _ZNK19ChemistryTableBlock15isWaterBlockingEv
    virtual bool isValidAuxValue(int)const; // _ZNK19ChemistryTableBlock15isValidAuxValueEi
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK19ChemistryTableBlock11onFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK19ChemistryTableBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK19ChemistryTableBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK19ChemistryTableBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK19ChemistryTableBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK19ChemistryTableBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK19ChemistryTableBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK19ChemistryTableBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK19ChemistryTableBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK19ChemistryTableBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK19ChemistryTableBlock13getMappedFaceEhRK5Block
    virtual bool canBeSilkTouched()const; // _ZNK19ChemistryTableBlock16canBeSilkTouchedEv
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK19ChemistryTableBlock21getEntityResourceItemER6RandomRK10BlockActori
    ChemistryTableBlock(std::string const&, int); // _ZN19ChemistryTableBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//  void getItemForType(ChemistryTableType, int); //TODO: incomplete function definition // _ZN19ChemistryTableBlock14getItemForTypeE18ChemistryTableTypei
    void _getBlockEntity(BlockSource &, BlockPos const&); // _ZN19ChemistryTableBlock15_getBlockEntityER11BlockSourceRK8BlockPos
//  bool isUIValidForPlayer(BlockPos const&, Player &, float, ChemistryTableType); //TODO: incomplete function definition // _ZN19ChemistryTableBlock18isUIValidForPlayerERK8BlockPosR6Playerf18ChemistryTableType
    void _isChemistryTable(Block const&); // _ZN19ChemistryTableBlock17_isChemistryTableERK5Block
};
