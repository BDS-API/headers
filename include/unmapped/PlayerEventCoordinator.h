#pragma once

#include <vector>


class PlayerEventCoordinator {

public:
    void sendPlayerHurt(Player &, ActorDamageSource &); // _ZN22PlayerEventCoordinator14sendPlayerHurtER6PlayerR17ActorDamageSource
    void sendPlayerMove(Player &); // _ZN22PlayerEventCoordinator14sendPlayerMoveER6Player
    void sendPlayerSlide(Player &); // _ZN22PlayerEventCoordinator15sendPlayerSlideER6Player
    void sendPlayerTick(Player &); // _ZN22PlayerEventCoordinator14sendPlayerTickER6Player
    void sendPlayerTeleported(Player &); // _ZN22PlayerEventCoordinator20sendPlayerTeleportedER6Player
    void sendPlayerDestroyedBlock(Player &, int, int, int); // _ZN22PlayerEventCoordinator24sendPlayerDestroyedBlockER6Playeriii
    void sendPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&); // _ZN22PlayerEventCoordinator23sendPlayerEnchantedItemER6PlayerRK9ItemStackRK12ItemEnchants
    void sendPlayerNamedItem(Player &, ItemDescriptor const&); // _ZN22PlayerEventCoordinator19sendPlayerNamedItemER6PlayerRK14ItemDescriptor
    void sendPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&); // _ZN22PlayerEventCoordinator21sendPlayerCraftedItemER6PlayerRK12ItemInstancebbbiiibbRKSt6vectorIsSaIsEE
//  void sendPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition // _ZN22PlayerEventCoordinator26sendPlayerAwardAchievementER6PlayerN17MinecraftEventing14AchievementIdsE
//  void sendPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN22PlayerEventCoordinator21sendPlayerPortalBuiltER6Player11AutomaticIDI9DimensioniE
//  void sendPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN22PlayerEventCoordinator20sendPlayerPortalUsedER6Player11AutomaticIDI9DimensioniES4_
    void sendPlayerCaravanChanged(Actor const&, int); // _ZN22PlayerEventCoordinator24sendPlayerCaravanChangedERK5Actori
    void sendPlayerSaved(Player &); // _ZN22PlayerEventCoordinator15sendPlayerSavedER6Player
    void sendPlayerItemUseInteraction(Player &, ItemInstance const&); // _ZN22PlayerEventCoordinator28sendPlayerItemUseInteractionER6PlayerRK12ItemInstance
    void sendPlayerItemPlaceInteraction(Player &, ItemInstance const&); // _ZN22PlayerEventCoordinator30sendPlayerItemPlaceInteractionER6PlayerRK12ItemInstance
    void sendPlayerItemEquipped(Player &, ItemInstance const&, int); // _ZN22PlayerEventCoordinator22sendPlayerItemEquippedER6PlayerRK12ItemInstancei
    ~PlayerEventCoordinator(); // _ZN22PlayerEventCoordinatorD2Ev
    PlayerEventCoordinator(); // _ZN22PlayerEventCoordinatorC2Ev
};
