#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "LabTableReactionComponent.h"
#include "../bedrock/item/ItemStack.h"
#include <memory>


class LabTableReaction {

public:
    ~LabTableReaction();
    void _getRandom();
    void getReactionId();
    void _setLifetime(int, int);
    void _secsToTicks(float);
    void _getPercentage()const;
    void getType();
    void tick(BlockSource &);
    void _getTableTop()const;
    void _getIsClientSide()const;
    void addComponent(std::unique_ptr<LabTableReactionComponent>);
//  LabTableReaction(LabTableReactionType, BlockPos const&, bool, int, int); //TODO: incomplete function definition
    void _onEnd(BlockSource &);
    void _onStart(BlockSource &);
//  void createReaction(LabTableReactionType, BlockPos const&, bool); //TODO: incomplete function definition
    void addResultItem(ItemStack const&);
    void _getPos()const;
    void _onTick(BlockSource &);
};
