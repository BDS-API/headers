#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/item/ItemInstance.h"
#include "Dimension.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include <vector>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"


class PlayerEventCoordinator {

public:
    void sendPlayerDestroyedBlock(Player &, int, int, int);
    void sendPlayerCaravanChanged(Actor const&, int);
    void sendPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    void sendPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    void sendPlayerNamedItem(Player &, ItemDescriptor const&);
//  void sendPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void sendPlayerItemEquipped(Player &, ItemInstance const&, int);
//  void sendPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    PlayerEventCoordinator();
    void sendPlayerTick(Player &);
    void sendPlayerItemUseInteraction(Player &, ItemInstance const&);
    ~PlayerEventCoordinator();
    void sendPlayerTeleported(Player &);
//  void sendPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
    void sendPlayerSlide(Player &);
    void sendPlayerHurt(Player &, ActorDamageSource &);
    void sendPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);
    void sendPlayerSaved(Player &);
    void sendPlayerMove(Player &);
};
