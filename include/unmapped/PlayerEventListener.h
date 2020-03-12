#pragma once

#include <string>
#include <vector>


class PlayerEventListener {

public:
//  virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
    virtual void onPlayerCaravanChanged(Actor const&, int);
    virtual void onPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    virtual void onPlayerOnGround(Player &);
//  virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void onPlayerStartRiding(Player &, Actor &);
    virtual void onPlayerDestroyedBlock(Player &, BlockLegacy const&);
    virtual void onPlayerNamedItem(Player &, ItemDescriptor const&);
    virtual void onPlayerSlide(Player &);
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
//  virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onPlayerItemEquipped(Player &, ItemInstance const&, int);
    ~PlayerEventListener();
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
//  virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition
//  virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onPlayerTick(Player &);
//  virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int); //TODO: incomplete function definition
    virtual void onPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    virtual void onPlayerAttackedActor(Player &, Actor &);
    virtual void onPlayerMove(Player &);
    virtual void onPlayerEquippedArmor(Player &, ItemDescriptor const&);
    virtual void onPlayerItemUseInteraction(Player &, ItemInstance const&);
    virtual void onPlayerSaved(Player &);
    virtual void onPlayerInput(Player &, MoveInputHandler &);
    virtual void onPlayerTurn(Player &, Vec2 &);
    virtual void onPlayerTeleported(Player &);
//  virtual void onPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    virtual void onPlayerDestroyedBlock(Player &, int, int, int);
    virtual void onPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);
    virtual void onPlayerStopRiding(Player &, bool, bool, bool);
    PlayerEventListener();
};
