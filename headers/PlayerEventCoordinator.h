#pragma once

class PlayerEventCoordinator {

public:

    void sendPlayerHurt(Player &, ActorDamageSource &);
    void sendPlayerMove(Player &);
    void sendPlayerTick(Player &);
    void sendPlayerTeleported(Player &);
    void sendPlayerDestroyedBlock(Player &, int, int, int);
    void sendPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    void sendPlayerNamedItem(Player &, ItemDescriptor const&);
    void sendPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short, std::allocator<short>> const&);
    void sendPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds);
    void sendPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>);
    void sendPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    void sendPlayerCaravanChanged(Actor const&, int);
    void sendPlayerSaved(Player &);
    void sendPlayerItemUseInteraction(Player &, ItemInstance const&);
    void sendPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    void sendPlayerItemEquipped(Player &, ItemInstance const&, int);
    void PlayerEventCoordinator(void);
};
