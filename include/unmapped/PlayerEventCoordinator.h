#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "./Dimension.h"
#include <memory>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include <vector>


class PlayerEventCoordinator {

public:

    void sendPlayerHurt(Player &, ActorDamageSource &);
    void sendPlayerMove(Player &);
    void sendPlayerSlide(Player &);
    void sendPlayerTick(Player &);
    void sendPlayerTeleported(Player &);
    void sendPlayerDestroyedBlock(Player &, int, int, int);
    void sendPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    void sendPlayerNamedItem(Player &, ItemDescriptor const&);
    void sendPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short, std::allocator<short>> const&);
//  void sendPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
//  void sendPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  void sendPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void sendPlayerCaravanChanged(Actor const&, int);
    void sendPlayerSaved(Player &);
    void sendPlayerItemUseInteraction(Player &, ItemInstance const&);
    void sendPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    void sendPlayerItemEquipped(Player &, ItemInstance const&, int);
    ~PlayerEventCoordinator();
    PlayerEventCoordinator();
};
