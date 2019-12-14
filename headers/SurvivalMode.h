#pragma once

class SurvivalMode : GameMode {

public:
    static long SurvivalMode::mTrialHasEnded;

    virtual ~SurvivalMode();
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void tick(void);
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode(void);
    virtual void registerUpsellScreenCallback(std::function<void ()(bool)>);

    void SurvivalMode(Player &);
    void _showTrialReminder(bool);
    void _messagePlayers(std::string);
};
