#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/item/ItemStack"
#include "../bedrock/item/ItemStackBase"
#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/item/Item"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"
#include "../bedrock/item/unmapped/ItemEnchants"


class EnchantUtils {

public:
    static long PROTECTIONFACTOR_PRIMARYCAP;
    static long PROTECTIONFACTOR_SECONDARYCAP;
    static long mEnchantmentNames[abi:cxx11];


    void getBestEnchantLevel(Enchant::Type, Mob const&, EquipmentFilter);
    void getEquipmentSet(Mob const&, EquipmentFilter);
    void getEnchantLevel(Enchant::Type, ItemStackBase const&);
    void getRandomItemWith(Enchant::Type, Mob const&, EquipmentFilter);
    bool hasEnchant(Enchant::Type, ItemStack const&);
    void getRandomItemWithMending(Mob const&);
    void randomlyEnchant(ItemStack &);
    void getLegalEnchants(Item const*);
    void applyEnchant(ItemStack &, Enchant::Type, int, bool);
    void randomlyEnchant(ItemStack &, int, int, bool);
    void applyEnchant(ItemStack &, ItemEnchants const&, bool);
    void selectEnchantments(Item const*, int, int, bool);
    void _convertBookCheck(ItemStack &);
    void randomlyEnchant(ItemInstance &);
    void applyEnchant(ItemInstance &, Enchant::Type, int, bool);
    void randomlyEnchant(ItemInstance &, int, int, bool);
    void applyEnchant(ItemInstance &, ItemEnchants const&, bool);
    void _convertBookCheck(ItemInstance &);
    void getLootableRandomEnchantIndex(Random &);
    void applyEnchant(ItemInstance &, EnchantmentInstance const&, bool);
    void applyEnchant(ItemStack &, EnchantmentInstance const&, bool);
    void removeEnchants(ItemStack &);
    bool canEnchant(ItemStack const&, EnchantmentInstance const&, bool);
    bool canEnchant(ItemStack const&, Enchant::Type, int, bool);
    void getEnchantCosts(ItemInstance const&, int);
    void getEnchantCosts(ItemStack const&, int);
    void getAvailableEnchantmentResults(Item const*, int, bool);
    void determineActivation(Enchant::Type);
    void determineCompatibility(Enchant::Type);
    bool hasEnchant(Enchant::Type, ItemInstance const&);
    void getDamageReduction(ActorDamageSource const&, Mob const&);
    void getMeleeDamageBonus(Actor const&, Actor&);
    void getTotalProtectionLevels(Enchant::Type, Mob const&);
    void doPostHurtEffects(Mob &, Mob &);
    void doPostDamageEffects(Actor &, Actor &);
    void combineEnchantedItems(ItemStack const&, ItemStack const&, ItemStack&, bool);
    bool isCompatibleWith(Enchant::Type, Enchant::Type);
    void generateRandomEnchantedItem(Item const&, int, int);
    void generateRandomEnchantedBook(int, int);
    void generateRandomEnchantedBook();
    void generateEnchantedBook(EnchantmentInstance const&);
    void generateEnchantedBook(ItemEnchants const&);
    void getBookcaseCount(BlockSource &, Vec3 const&);
    void getBookCasePositions(BlockSource &, Vec3 const&);
    void getEnchantingTablePositions(BlockSource &, Vec3 const&);
    void getEnchantmentId(Util::HashString const&);
};
