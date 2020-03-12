#pragma once

#include <string>


namespace EnchantUtils {

    static long PROTECTIONFACTOR_PRIMARYCAP;
    static long PROTECTIONFACTOR_SECONDARYCAP;
    static std::string mEnchantmentNames;

    void _convertBookCheck(ItemInstance &);
    void applyEnchant(ItemStack &, EnchantmentInstance const&, bool);
    void getBookCasePositions(BlockSource &, Vec3 const&);
    void doPostDamageEffects(Actor &, Actor &);
    void randomlyEnchant(ItemInstance &, int, int, bool);
//  bool isCompatibleWith(Enchant::Type, Enchant::Type); //TODO: incomplete function definition
    void getEnchantmentId(Util::HashString const&);
    void doPostHurtEffects(Mob &, Mob &);
//  std::string getEnchantNameAndLevel(Enchant::Type, int); //TODO: incomplete function definition
//  void getEnchantLevel(Enchant::Type, ItemStackBase const&); //TODO: incomplete function definition
    void getBookcaseCount(BlockSource &, Vec3 const&);
    void getEnchantCosts(ItemInstance const&, int);
    bool canEnchant(ItemStack const&, EnchantmentInstance const&, bool);
    void applyEnchant(ItemInstance &, ItemEnchants const&, bool);
//  void determineCompatibility(Enchant::Type); //TODO: incomplete function definition
//  void applyEnchant(ItemInstance &, Enchant::Type, int, bool); //TODO: incomplete function definition
    std::string getRandomName();
    void randomlyEnchant(ItemStack &);
    void randomlyEnchant(ItemInstance &);
//  void getEquipmentSet(Mob const&, EquipmentFilter); //TODO: incomplete function definition
    void getAvailableEnchantmentResults(Item const*, int, bool);
//  void getTotalProtectionLevels(Enchant::Type, Mob const&); //TODO: incomplete function definition
    void selectEnchantments(Item const*, int, int, bool);
    void getEnchantCosts(ItemStack const&, int);
    void generateRandomEnchantedItem(Item const&, int, int);
    void applyEnchant(ItemInstance &, EnchantmentInstance const&, bool);
    void getLootableRandomEnchantIndex(Random &);
//  void getRandomItemWith(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
    void removeEnchants(ItemStack &);
//  bool canEnchant(ItemStack const&, Enchant::Type, int, bool); //TODO: incomplete function definition
    void generateRandomEnchantedBook();
    void getEnchantingTablePositions(BlockSource &, Vec3 const&);
//  void getBestEnchantLevel(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition
    void getRandomItemWithMending(Mob const&);
    void _convertBookCheck(ItemStack &);
    void getLegalEnchants(Item const*);
//  void applyEnchant(ItemStack &, Enchant::Type, int, bool); //TODO: incomplete function definition
//  void determineActivation(Enchant::Type); //TODO: incomplete function definition
    void getDamageReduction(ActorDamageSource const&, Mob const&);
    void getMeleeDamageBonus(Actor const&, Actor &);
    void combineEnchantedItems(ItemStack const&, ItemStack const&, ItemStack &, bool);
    void generateRandomEnchantedBook(int, int);
    void randomlyEnchant(ItemStack &, int, int, bool);
    void generateEnchantedBook(EnchantmentInstance const&);
    void applyEnchant(ItemStack &, ItemEnchants const&, bool);
    void generateEnchantedBook(ItemEnchants const&);
//  bool hasEnchant(Enchant::Type, ItemInstance const&); //TODO: incomplete function definition
//  bool hasEnchant(Enchant::Type, ItemStack const&); //TODO: incomplete function definition
};
