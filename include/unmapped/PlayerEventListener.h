#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/util/Vec2.h"
#include <string>
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/block/BlockLegacy.h"
#include "MoveInputHandler.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"


class PlayerEventListener {

public:
    virtual void onPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    virtual void onPlayerDestroyedBlock(Player &, BlockLegacy const&);
//  virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void onPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);
    virtual void onPlayerSlide(Player &);
    virtual void onPlayerOnGround(Player &);
    ~PlayerEventListener();
    virtual void onPlayerSaved(Player &);
    virtual void onPlayerDestroyedBlock(Player &, int, int, int);
    virtual void onPlayerStartRiding(Player &, Actor &);
    virtual void onPlayerStopRiding(Player &, bool, bool, bool);
    virtual void onPlayerTeleported(Player &);
    virtual void onPlayerEquippedArmor(Player &, ItemDescriptor const&);
    virtual void onPlayerItemUseInteraction(Player &, ItemInstance const&);
    virtual void onPlayerAttackedActor(Player &, Actor &);
    virtual void onPlayerMove(Player &);
    virtual void onPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    virtual void onPlayerInput(Player &, MoveInputHandler &);
    virtual void onPlayerCaravanChanged(Actor const&, int);
//  virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    virtual void onPlayerItemEquipped(Player &, ItemInstance const&, int);
//  virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onPlayerNamedItem(Player &, ItemDescriptor const&);
//  virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
//  virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int); //TODO: incomplete function definition
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onPlayerTick(Player &);
//  virtual void onPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
//  virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    virtual void onPlayerTurn(Player &, Vec2 &);
    PlayerEventListener();
};
