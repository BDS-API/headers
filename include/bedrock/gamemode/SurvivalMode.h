#pragma once

#include <string>
#include <functional>
#include "GameMode.h"


class SurvivalMode : GameMode {

public:
    static long mTrialHasEnded;

    ~SurvivalMode(); // _ZN12SurvivalModeD2Ev
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &); // _ZN12SurvivalMode17startDestroyBlockERK8BlockPoshRb
    virtual void destroyBlock(BlockPos const&, unsigned char); // _ZN12SurvivalMode12destroyBlockERK8BlockPosh
    virtual void startBuildBlock(BlockPos const&, unsigned char); // _ZN12SurvivalMode15startBuildBlockERK8BlockPosh
    virtual void buildBlock(BlockPos const&, unsigned char); // _ZN12SurvivalMode10buildBlockERK8BlockPosh
    virtual void tick(); // _ZN12SurvivalMode4tickEv
    virtual void useItem(ItemStack &); // _ZN12SurvivalMode7useItemER9ItemStack
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*); // _ZN12SurvivalMode9useItemOnER9ItemStackRK8BlockPoshRK4Vec3PK5Block
    virtual void interact(Actor &, Vec3 const&); // _ZN12SurvivalMode8interactER5ActorRK4Vec3
    virtual void attack(Actor &); // _ZN12SurvivalMode6attackER5Actor
    virtual void setTrialMode(bool); // _ZN12SurvivalMode12setTrialModeEb
    virtual bool isInTrialMode(); // _ZN12SurvivalMode13isInTrialModeEv
    virtual void registerUpsellScreenCallback(std::function<void (bool)>); // _ZN12SurvivalMode28registerUpsellScreenCallbackESt8functionIFvbEE
    SurvivalMode(Player &); // _ZN12SurvivalModeC2ER6Player
    void _showTrialReminder(bool); // _ZN12SurvivalMode18_showTrialReminderEb
    void _messagePlayers(std::string); // _ZN12SurvivalMode15_messagePlayersENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
