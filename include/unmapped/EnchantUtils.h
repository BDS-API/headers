#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/item/unmapped/ItemEnchants.h"
#include <string>
#include "./HashString.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/ItemStackBase.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Mob.h"
#include "./EnchantmentInstance.h"
#include "../bedrock/item/Item.h"


class EnchantUtils {

public:
    static long PROTECTIONFACTOR_PRIMARYCAP;
    static long PROTECTIONFACTOR_SECONDARYCAP;
    static std::string mEnchantmentNames;


//  void getBestEnchantLevel(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
//  void getEquipmentSet(Mob const&, EquipmentFilter); //TODO: incomplete function definition
//  void getEnchantLevel(Enchant::Type, ItemStackBase const&); //TODO: incomplete function definition
//  void getRandomItemWith(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
//  bool hasEnchant(Enchant::Type, ItemStack const&); //TODO: incomplete function definition
    void getRandomItemWithMending(Mob const&);
    void randomlyEnchant(ItemStack &);
    void getLegalEnchants(Item const*);
//  void applyEnchant(ItemStack &, Enchant::Type, int, bool); //TODO: incomplete function definition
    void randomlyEnchant(ItemStack &, int, int, bool);
    void applyEnchant(ItemStack &, ItemEnchants const&, bool);
    void selectEnchantments(Item const*, int, int, bool);
    void _convertBookCheck(ItemStack &);
    void randomlyEnchant(ItemInstance &);
//  void applyEnchant(ItemInstance &, Enchant::Type, int, bool); //TODO: incomplete function definition
    void randomlyEnchant(ItemInstance &, int, int, bool);
    void applyEnchant(ItemInstance &, ItemEnchants const&, bool);
    void _convertBookCheck(ItemInstance &);
    void getLootableRandomEnchantIndex(Random &);
    void applyEnchant(ItemInstance &, EnchantmentInstance const&, bool);
    void applyEnchant(ItemStack &, EnchantmentInstance const&, bool);
    void removeEnchants(ItemStack &);
    bool canEnchant(ItemStack const&, EnchantmentInstance const&, bool);
//  bool canEnchant(ItemStack const&, Enchant::Type, int, bool); //TODO: incomplete function definition
    void getEnchantCosts(ItemInstance const&, int);
    void getEnchantCosts(ItemStack const&, int);
    void getAvailableEnchantmentResults(Item const*, int, bool);
//  void determineActivation(Enchant::Type); //TODO: incomplete function definition
//  void determineCompatibility(Enchant::Type); //TODO: incomplete function definition
//  bool hasEnchant(Enchant::Type, ItemInstance const&); //TODO: incomplete function definition
    void getDamageReduction(ActorDamageSource const&, Mob const&);
    void getMeleeDamageBonus(Actor const&, Actor &);
//  void getTotalProtectionLevels(Enchant::Type, Mob const&); //TODO: incomplete function definition
    void doPostHurtEffects(Mob &, Mob &);
    void doPostDamageEffects(Actor &, Actor &);
    void combineEnchantedItems(ItemStack const&, ItemStack const&, ItemStack &, bool);
//  bool isCompatibleWith(Enchant::Type, Enchant::Type); //TODO: incomplete function definition
    void generateRandomEnchantedItem(Item const&, int, int);
    void generateRandomEnchantedBook(int, int);
    void generateRandomEnchantedBook();
    void generateEnchantedBook(EnchantmentInstance const&);
    void generateEnchantedBook(ItemEnchants const&);
    void getBookcaseCount(BlockSource &, Vec3 const&);
    void getBookCasePositions(BlockSource &, Vec3 const&);
    void getEnchantingTablePositions(BlockSource &, Vec3 const&);
    std::string getRandomName();
//  std::string getEnchantNameAndLevel(Enchant::Type, int); //TODO: incomplete function definition
    void getEnchantmentId(Util::HashString const&);
};
