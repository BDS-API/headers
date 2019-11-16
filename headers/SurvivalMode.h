#pragma once

class SurvivalMode : GameMode {

    virtual void SurvivalMode::~SurvivalMode();
    virtual void SurvivalMode::~SurvivalMode();
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void stopBuildBlock(void);
    virtual void tick(void);
    virtual void getPickRange(InputMode const&, bool);
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void releaseUsingItem(void);
    virtual void setTrialMode(bool);
    virtual void isInTrialMode(void);
    virtual void registerUpsellScreenCallback(std::function<void ()(bool)>);
}
