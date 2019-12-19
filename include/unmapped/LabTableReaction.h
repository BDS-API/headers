#pragma once

class LabTableReaction {

public:
    virtual LabTableReaction::~LabTableReaction();

    LabTableReaction(LabTableReactionType, BlockPos const&, bool, int, int);
    void _setLifetime(int, int);
    void addResultItem(ItemStack const&);
    void addComponent(std::unique_ptr<LabTableReactionComponent, std::default_delete<LabTableReactionComponent>>);
    void tick(BlockSource &);
    void _onStart(BlockSource &);
    void _onTick(BlockSource &);
    void _onEnd(BlockSource &);
    void getType(void);
    void getReactionId(void);
    void _getIsClientSide(void)const;
    void _getPercentage(void)const;
    void _getTableTop(void)const;
    void _getPos(void)const;
    void _getRandom(void);
    void _secsToTicks(float);
    void createReaction(LabTableReactionType, BlockPos const&, bool);
};
