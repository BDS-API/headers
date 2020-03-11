#pragma once

#include "./LabTableReactionComponent.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/util/BlockPos.h"


class LabTableReaction {

public:
    virtual ~LabTableReaction();

//  LabTableReaction(LabTableReactionType, BlockPos const&, bool, int, int); //TODO: incomplete function definition
    void _setLifetime(int, int);
    void addResultItem(ItemStack const&);
    void addComponent(std::unique_ptr<LabTableReactionComponent, std::default_delete<LabTableReactionComponent>>);
    void tick(BlockSource &);
    void _onStart(BlockSource &);
    void _onTick(BlockSource &);
    void _onEnd(BlockSource &);
    void getType();
    void getReactionId();
    void _getIsClientSide()const;
    void _getPercentage()const;
    void _getTableTop()const;
    void _getPos()const;
    void _getRandom();
    void _secsToTicks(float);
//  void createReaction(LabTableReactionType, BlockPos const&, bool); //TODO: incomplete function definition
};
