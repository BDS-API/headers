#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"
#include "../item/ItemStack"


class SurvivalMode : GameMode {

public:
    static long mTrialHasEnded;

    virtual SurvivalMode::~SurvivalMode()
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
    virtual void registerUpsellScreenCallback(std::function<void ()(bool)>);

    SurvivalMode(Player &);
    void _showTrialReminder(bool);
    void _messagePlayers(std::string);
};
