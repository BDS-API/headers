#pragma once

#include <string>
#include "ActorBlock.h"


class ChemistryTableBlock : ActorBlock {

public:
    ~ChemistryTableBlock();
    virtual bool isWaterBlocking()const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool isCraftingBlock()const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    void _getBlockEntity(BlockSource &, BlockPos const&);
//  bool isUIValidForPlayer(BlockPos const&, Player &, float, ChemistryTableType); //TODO: incomplete function definition
//  void getItemForType(ChemistryTableType, int); //TODO: incomplete function definition
    void _isChemistryTable(Block const&);
    ChemistryTableBlock(std::string const&, int);
};
