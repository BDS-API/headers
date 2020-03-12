#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "actor/BlockActor.h"
#include "ActorBlock.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class ChemistryTableBlock : ActorBlock {

public:
    ~ChemistryTableBlock();
    virtual bool canBeSilkTouched()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isWaterBlocking()const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isCraftingBlock()const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    void _getBlockEntity(BlockSource &, BlockPos const&);
//  bool isUIValidForPlayer(BlockPos const&, Player &, float, ChemistryTableType); //TODO: incomplete function definition
    ChemistryTableBlock(std::string const&, int);
//  void getItemForType(ChemistryTableType, int); //TODO: incomplete function definition
    void _isChemistryTable(Block const&);
};
