#pragma once

#include <string>
#include <vector>


class PlayerEventListener {

public:
    ~PlayerEventListener(); // _ZN19PlayerEventListenerD2Ev
//  virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition // _ZN19PlayerEventListener24onPlayerAwardAchievementER6PlayerN17MinecraftEventing14AchievementIdsE
//  virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN19PlayerEventListener19onPlayerPortalBuiltER6Player11AutomaticIDI9DimensioniE
//  virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN19PlayerEventListener18onPlayerPortalUsedER6Player11AutomaticIDI9DimensioniES4_
    virtual void onPlayerCaravanChanged(Actor const&, int); // _ZN19PlayerEventListener22onPlayerCaravanChangedERK5Actori
    virtual void onPlayerSaved(Player &); // _ZN19PlayerEventListener13onPlayerSavedER6Player
    virtual void onPlayerInput(Player &, MoveInputHandler &); // _ZN19PlayerEventListener13onPlayerInputER6PlayerR16MoveInputHandler
    virtual void onPlayerTurn(Player &, Vec2 &); // _ZN19PlayerEventListener12onPlayerTurnER6PlayerR4Vec2
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &); // _ZN19PlayerEventListener19onStartDestroyBlockER6PlayerRK8BlockPosRh
//  virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int); //TODO: incomplete function definition // _ZN19PlayerEventListener14onPlayerActionER6Player16PlayerActionTypeRK8BlockPosi
    virtual void onPlayerHurt(Player &, ActorDamageSource &); // _ZN19PlayerEventListener12onPlayerHurtER6PlayerR17ActorDamageSource
//  virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition // _ZN19PlayerEventListener18onLocalPlayerDeathER15IClientInstanceR11LocalPlayer
//  virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition // _ZN19PlayerEventListener20onLocalPlayerRespawnER15IClientInstanceR11LocalPlayer
    virtual void onPlayerMove(Player &); // _ZN19PlayerEventListener12onPlayerMoveER6Player
    virtual void onPlayerSlide(Player &); // _ZN19PlayerEventListener13onPlayerSlideER6Player
    virtual void onPlayerTick(Player &); // _ZN19PlayerEventListener12onPlayerTickER6Player
    virtual void onPlayerStartRiding(Player &, Actor &); // _ZN19PlayerEventListener19onPlayerStartRidingER6PlayerR5Actor
    virtual void onPlayerStopRiding(Player &, bool, bool, bool); // _ZN19PlayerEventListener18onPlayerStopRidingER6Playerbbb
//  virtual void onPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN19PlayerEventListener15onPlayerCreatedER11LocalPlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_b
    virtual void onPlayerTeleported(Player &); // _ZN19PlayerEventListener18onPlayerTeleportedER6Player
    virtual void onPlayerAttackedActor(Player &, Actor &); // _ZN19PlayerEventListener21onPlayerAttackedActorER6PlayerR5Actor
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float); // _ZN19PlayerEventListener25onPlayerMovementCorrectedER6PlayerRK4Vec3ff
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float); // _ZN19PlayerEventListener23onPlayerMovementAnomalyER6PlayerRK4Vec3ff
    virtual void onPlayerDestroyedBlock(Player &, int, int, int); // _ZN19PlayerEventListener22onPlayerDestroyedBlockER6Playeriii
    virtual void onPlayerDestroyedBlock(Player &, BlockLegacy const&); // _ZN19PlayerEventListener22onPlayerDestroyedBlockER6PlayerRK11BlockLegacy
    virtual void onPlayerOnGround(Player &); // _ZN19PlayerEventListener16onPlayerOnGroundER6Player
    virtual void onPlayerEquippedArmor(Player &, ItemDescriptor const&); // _ZN19PlayerEventListener21onPlayerEquippedArmorER6PlayerRK14ItemDescriptor
    virtual void onPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&); // _ZN19PlayerEventListener21onPlayerEnchantedItemER6PlayerRK9ItemStackRK12ItemEnchants
    virtual void onPlayerNamedItem(Player &, ItemDescriptor const&); // _ZN19PlayerEventListener17onPlayerNamedItemER6PlayerRK14ItemDescriptor
    virtual void onPlayerItemUseInteraction(Player &, ItemInstance const&); // _ZN19PlayerEventListener26onPlayerItemUseInteractionER6PlayerRK12ItemInstance
    virtual void onPlayerItemPlaceInteraction(Player &, ItemInstance const&); // _ZN19PlayerEventListener28onPlayerItemPlaceInteractionER6PlayerRK12ItemInstance
    virtual void onPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&); // _ZN19PlayerEventListener19onPlayerCraftedItemER6PlayerRK12ItemInstancebbbiiibbRKSt6vectorIsSaIsEE
    virtual void onPlayerItemEquipped(Player &, ItemInstance const&, int); // _ZN19PlayerEventListener20onPlayerItemEquippedER6PlayerRK12ItemInstancei
    PlayerEventListener(); // _ZN19PlayerEventListenerC2Ev
};
