#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/util/Vec3"
#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Player"
#include "../bedrock/util/Vec2"
#include "../bedrock/util/BlockPos"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/item/unmapped/ItemDescriptor"
#include "../bedrock/item/unmapped/ItemEnchants"


class PlayerEventListener {

public:
    virtual PlayerEventListener::~PlayerEventListener()
    virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds);
    virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>);
    virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    virtual void onPlayerCaravanChanged(Actor const&, int);
    virtual void onPlayerSaved(Player &);
    virtual void onPlayerInput(Player &, MoveInputHandler &);
    virtual void onPlayerTurn(Player &, Vec2 &);
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &);
    virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &);
    virtual void onPlayerMove(Player &);
    virtual void onPlayerSlide(Player &);
    virtual void onPlayerTick(Player &);
    virtual void onPlayerStartRiding(Player &, Actor &);
    virtual void onPlayerStopRiding(Player &, bool, bool, bool);
    virtual void onPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool);
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

    PlayerEventListener(void);
};
