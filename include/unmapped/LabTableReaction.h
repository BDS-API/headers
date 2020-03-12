#pragma once

#include <memory>


class LabTableReaction {

public:
    ~LabTableReaction();
    void addResultItem(ItemStack const&);
    void _onStart(BlockSource &);
    void _getPos()const;
    void _secsToTicks(float);
    void _onTick(BlockSource &);
    void _getTableTop()const;
    void _onEnd(BlockSource &);
//  LabTableReaction(LabTableReactionType, BlockPos const&, bool, int, int); //TODO: incomplete function definition
    void getReactionId();
    void _getPercentage()const;
    void _getRandom();
    void _setLifetime(int, int);
    void getType();
//  void createReaction(LabTableReactionType, BlockPos const&, bool); //TODO: incomplete function definition
    void tick(BlockSource &);
    void addComponent(std::unique_ptr<LabTableReactionComponent>);
    void _getIsClientSide()const;
};
