#pragma once

#include <vector>


class PlayerEventCoordinator {

public:
    void sendPlayerHurt(Player &, ActorDamageSource &);
    void sendPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    void sendPlayerTeleported(Player &);
    void sendPlayerItemUseInteraction(Player &, ItemInstance const&);
    PlayerEventCoordinator();
    void sendPlayerDestroyedBlock(Player &, int, int, int);
//  void sendPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void sendPlayerCaravanChanged(Actor const&, int);
    void sendPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);
    ~PlayerEventCoordinator();
    void sendPlayerMove(Player &);
//  void sendPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
//  void sendPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void sendPlayerSaved(Player &);
    void sendPlayerNamedItem(Player &, ItemDescriptor const&);
    void sendPlayerItemEquipped(Player &, ItemInstance const&, int);
    void sendPlayerTick(Player &);
    void sendPlayerSlide(Player &);
    void sendPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
};
