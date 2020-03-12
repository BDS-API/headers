#pragma once

#include <string>
#include "GameMode.h"
#include <functional>


class SurvivalMode : GameMode {

public:
    static long mTrialHasEnded;

    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void useItem(ItemStack &);
    ~SurvivalMode();
    virtual void interact(Actor &, Vec3 const&);
    virtual void setTrialMode(bool);
    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual bool isInTrialMode();
    virtual void tick();
    virtual void attack(Actor &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    void _messagePlayers(std::string);
    SurvivalMode(Player &);
    void _showTrialReminder(bool);
};
