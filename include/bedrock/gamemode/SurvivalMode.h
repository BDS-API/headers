#pragma once

#include <string>
#include "../item/ItemStack.h"
#include "../util/BlockPos.h"
#include "./GameMode.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include <functional>
#include "../../unmapped/Block.h"


class SurvivalMode : GameMode {

public:
    static long mTrialHasEnded;

    virtual ~SurvivalMode();
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void tick();
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode();
//  virtual void registerUpsellScreenCallback(std::function<void (bool)>); //TODO: incomplete function definition

    SurvivalMode(Player &);
    void _showTrialReminder(bool);
    void _messagePlayers(std::string);
};
