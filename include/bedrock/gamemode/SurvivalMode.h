#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "GameMode.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../item/ItemStack.h"


class SurvivalMode : GameMode {

public:
    static long mTrialHasEnded;

    virtual void attack(Actor &);
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode();
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void tick();
    virtual void useItem(ItemStack &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    ~SurvivalMode();
    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void interact(Actor &, Vec3 const&);
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    void _showTrialReminder(bool);
    void _messagePlayers(std::string);
    SurvivalMode(Player &);
};
