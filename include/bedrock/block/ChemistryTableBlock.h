#pragma once

#include "../../unmapped/BaseGameVersion"
#include "actor/BlockActor"
#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ChemistryTableBlock : ActorBlock {

public:
    ChemistryTableBlock::~ChemistryTableBlock()
    virtual bool isCraftingBlock()const;
    virtual bool isWaterBlocking()const;
    virtual bool isValidAuxValue(int)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    ChemistryTableBlock(std::string const&, int);
    void getItemForType(ChemistryTableType, int);
    void _getBlockEntity(BlockSource &, BlockPos const&);
    bool isUIValidForPlayer(BlockPos const&, Player &, float, ChemistryTableType);
    void _isChemistryTable(Block const&);
};
