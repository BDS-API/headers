#pragma once

#include "../bedrock/item/ItemStackBase.h"
#include "HashString.h"
#include <string>
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "EnchantmentInstance.h"


namespace EnchantUtils {

    static long PROTECTIONFACTOR_PRIMARYCAP;
    static long PROTECTIONFACTOR_SECONDARYCAP;
    static std::string mEnchantmentNames;

    void applyEnchant(ItemInstance &, EnchantmentInstance const&, bool);
    void getEnchantingTablePositions(BlockSource &, Vec3 const&);
//  void getEnchantLevel(Enchant::Type, ItemStackBase const&); //TODO: incomplete function definition
    void getRandomItemWithMending(Mob const&);
//  bool hasEnchant(Enchant::Type, ItemInstance const&); //TODO: incomplete function definition
    void getEnchantCosts(ItemInstance const&, int);
//  void getEquipmentSet(Mob const&, EquipmentFilter); //TODO: incomplete function definition
    void getDamageReduction(ActorDamageSource const&, Mob const&);
    void doPostHurtEffects(Mob &, Mob &);
    void generateEnchantedBook(EnchantmentInstance const&);
    void combineEnchantedItems(ItemStack const&, ItemStack const&, ItemStack &, bool);
    void generateEnchantedBook(ItemEnchants const&);
//  void determineActivation(Enchant::Type); //TODO: incomplete function definition
    void getEnchantmentId(Util::HashString const&);
    bool canEnchant(ItemStack const&, EnchantmentInstance const&, bool);
    void _convertBookCheck(ItemInstance &);
    void getAvailableEnchantmentResults(Item const*, int, bool);
    void getMeleeDamageBonus(Actor const&, Actor &);
//  bool hasEnchant(Enchant::Type, ItemStack const&); //TODO: incomplete function definition
//  void getRandomItemWith(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
//  void getBestEnchantLevel(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
    std::string getRandomName();
    void removeEnchants(ItemStack &);
    void getEnchantCosts(ItemStack const&, int);
//  bool isCompatibleWith(Enchant::Type, Enchant::Type); //TODO: incomplete function definition
//  void applyEnchant(ItemInstance &, Enchant::Type, int, bool); //TODO: incomplete function definition
    void generateRandomEnchantedItem(Item const&, int, int);
//  void applyEnchant(ItemStack &, Enchant::Type, int, bool); //TODO: incomplete function definition
    void generateRandomEnchantedBook();
    void applyEnchant(ItemStack &, ItemEnchants const&, bool);
    void getBookCasePositions(BlockSource &, Vec3 const&);
    void _convertBookCheck(ItemStack &);
    void randomlyEnchant(ItemInstance &);
    void getLegalEnchants(Item const*);
//  void getTotalProtectionLevels(Enchant::Type, Mob const&); //TODO: incomplete function definition
    void applyEnchant(ItemInstance &, ItemEnchants const&, bool);
//  std::string getEnchantNameAndLevel(Enchant::Type, int); //TODO: incomplete function definition
    void randomlyEnchant(ItemStack &);
    void randomlyEnchant(ItemInstance &, int, int, bool);
    void getLootableRandomEnchantIndex(Random &);
    void doPostDamageEffects(Actor &, Actor &);
    void generateRandomEnchantedBook(int, int);
    void applyEnchant(ItemStack &, EnchantmentInstance const&, bool);
//  void determineCompatibility(Enchant::Type); //TODO: incomplete function definition
    void selectEnchantments(Item const*, int, int, bool);
//  bool canEnchant(ItemStack const&, Enchant::Type, int, bool); //TODO: incomplete function definition
    void randomlyEnchant(ItemStack &, int, int, bool);
    void getBookcaseCount(BlockSource &, Vec3 const&);
};
