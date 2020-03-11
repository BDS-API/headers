#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/util/Vec2.h"
#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/util/BlockPos.h"
#include <memory>
#include "./Dimension.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include <vector>
#include "./MoveInputHandler.h"
#include <string>


class PlayerEventListener {

public:
    virtual ~PlayerEventListener();
//  virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
//  virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void onPlayerCaravanChanged(Actor const&, int);
    virtual void onPlayerSaved(Player &);
    virtual void onPlayerInput(Player &, MoveInputHandler &);
    virtual void onPlayerTurn(Player &, Vec2 &);
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
//  virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int); //TODO: incomplete function definition
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
//  virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
//  virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    virtual void onPlayerMove(Player &);
    virtual void onPlayerSlide(Player &);
    virtual void onPlayerTick(Player &);
    virtual void onPlayerStartRiding(Player &, Actor &);
    virtual void onPlayerStopRiding(Player &, bool, bool, bool);
//  virtual void onPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    virtual void onPlayerTeleported(Player &);
    virtual void onPlayerAttackedActor(Player &, Actor &);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onPlayerDestroyedBlock(Player &, int, int, int);
    virtual void onPlayerDestroyedBlock(Player &, BlockLegacy const&);
    virtual void onPlayerOnGround(Player &);
    virtual void onPlayerEquippedArmor(Player &, ItemDescriptor const&);
    virtual void onPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    virtual void onPlayerNamedItem(Player &, ItemDescriptor const&);
    virtual void onPlayerItemUseInteraction(Player &, ItemInstance const&);
    virtual void onPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    virtual void onPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short, std::allocator<short>> const&);
    virtual void onPlayerItemEquipped(Player &, ItemInstance const&, int);

    PlayerEventListener();
};
