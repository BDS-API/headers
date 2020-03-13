#pragma once

#include <string>


namespace EnchantUtils {

    static long PROTECTIONFACTOR_PRIMARYCAP;
    static long PROTECTIONFACTOR_SECONDARYCAP;
    static std::string mEnchantmentNames;

//  void getBestEnchantLevel(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition // _ZN12EnchantUtils19getBestEnchantLevelEN7Enchant4TypeERK3Mob15EquipmentFilter
//  void getEquipmentSet(Mob const&, EquipmentFilter); //TODO: incomplete function definition // _ZN12EnchantUtils15getEquipmentSetERK3Mob15EquipmentFilter
//  void getEnchantLevel(Enchant::Type, ItemStackBase const&); //TODO: incomplete function definition // _ZN12EnchantUtils15getEnchantLevelEN7Enchant4TypeERK13ItemStackBase
//  void getRandomItemWith(Enchant::Type, Mob const&, EquipmentFilter); //TODO: incomplete function definition // _ZN12EnchantUtils17getRandomItemWithEN7Enchant4TypeERK3Mob15EquipmentFilter
//  bool hasEnchant(Enchant::Type, ItemStack const&); //TODO: incomplete function definition // _ZN12EnchantUtils10hasEnchantEN7Enchant4TypeERK9ItemStack
    void getRandomItemWithMending(Mob const&); // _ZN12EnchantUtils24getRandomItemWithMendingERK3Mob
    void randomlyEnchant(ItemStack &); // _ZN12EnchantUtils15randomlyEnchantER9ItemStack
    void getLegalEnchants(Item const*); // _ZN12EnchantUtils16getLegalEnchantsEPK4Item
//  void applyEnchant(ItemStack &, Enchant::Type, int, bool); //TODO: incomplete function definition // _ZN12EnchantUtils12applyEnchantER9ItemStackN7Enchant4TypeEib
    void randomlyEnchant(ItemStack &, int, int, bool); // _ZN12EnchantUtils15randomlyEnchantER9ItemStackiib
    void applyEnchant(ItemStack &, ItemEnchants const&, bool); // _ZN12EnchantUtils12applyEnchantER9ItemStackRK12ItemEnchantsb
    void selectEnchantments(Item const*, int, int, bool); // _ZN12EnchantUtils18selectEnchantmentsEPK4Itemiib
    void _convertBookCheck(ItemStack &); // _ZN12EnchantUtils17_convertBookCheckER9ItemStack
    void randomlyEnchant(ItemInstance &); // _ZN12EnchantUtils15randomlyEnchantER12ItemInstance
//  void applyEnchant(ItemInstance &, Enchant::Type, int, bool); //TODO: incomplete function definition // _ZN12EnchantUtils12applyEnchantER12ItemInstanceN7Enchant4TypeEib
    void randomlyEnchant(ItemInstance &, int, int, bool); // _ZN12EnchantUtils15randomlyEnchantER12ItemInstanceiib
    void applyEnchant(ItemInstance &, ItemEnchants const&, bool); // _ZN12EnchantUtils12applyEnchantER12ItemInstanceRK12ItemEnchantsb
    void _convertBookCheck(ItemInstance &); // _ZN12EnchantUtils17_convertBookCheckER12ItemInstance
    void getLootableRandomEnchantIndex(Random &); // _ZN12EnchantUtils29getLootableRandomEnchantIndexER6Random
    void applyEnchant(ItemInstance &, EnchantmentInstance const&, bool); // _ZN12EnchantUtils12applyEnchantER12ItemInstanceRK19EnchantmentInstanceb
    void applyEnchant(ItemStack &, EnchantmentInstance const&, bool); // _ZN12EnchantUtils12applyEnchantER9ItemStackRK19EnchantmentInstanceb
    void removeEnchants(ItemStack &); // _ZN12EnchantUtils14removeEnchantsER9ItemStack
    bool canEnchant(ItemStack const&, EnchantmentInstance const&, bool); // _ZN12EnchantUtils10canEnchantERK9ItemStackRK19EnchantmentInstanceb
//  bool canEnchant(ItemStack const&, Enchant::Type, int, bool); //TODO: incomplete function definition // _ZN12EnchantUtils10canEnchantERK9ItemStackN7Enchant4TypeEib
    void getEnchantCosts(ItemInstance const&, int); // _ZN12EnchantUtils15getEnchantCostsERK12ItemInstancei
    void getEnchantCosts(ItemStack const&, int); // _ZN12EnchantUtils15getEnchantCostsERK9ItemStacki
    void getAvailableEnchantmentResults(Item const*, int, bool); // _ZN12EnchantUtils30getAvailableEnchantmentResultsEPK4Itemib
//  void determineActivation(Enchant::Type); //TODO: incomplete function definition // _ZN12EnchantUtils19determineActivationEN7Enchant4TypeE
//  void determineCompatibility(Enchant::Type); //TODO: incomplete function definition // _ZN12EnchantUtils22determineCompatibilityEN7Enchant4TypeE
//  bool hasEnchant(Enchant::Type, ItemInstance const&); //TODO: incomplete function definition // _ZN12EnchantUtils10hasEnchantEN7Enchant4TypeERK12ItemInstance
    void getDamageReduction(ActorDamageSource const&, Mob const&); // _ZN12EnchantUtils18getDamageReductionERK17ActorDamageSourceRK3Mob
    void getMeleeDamageBonus(Actor const&, Actor &); // _ZN12EnchantUtils19getMeleeDamageBonusERK5ActorRS0_
//  void getTotalProtectionLevels(Enchant::Type, Mob const&); //TODO: incomplete function definition // _ZN12EnchantUtils24getTotalProtectionLevelsEN7Enchant4TypeERK3Mob
    void doPostHurtEffects(Mob &, Mob &); // _ZN12EnchantUtils17doPostHurtEffectsER3MobS1_
    void doPostDamageEffects(Actor &, Actor &); // _ZN12EnchantUtils19doPostDamageEffectsER5ActorS1_
    void combineEnchantedItems(ItemStack const&, ItemStack const&, ItemStack &, bool); // _ZN12EnchantUtils21combineEnchantedItemsERK9ItemStackS2_RS0_b
//  bool isCompatibleWith(Enchant::Type, Enchant::Type); //TODO: incomplete function definition // _ZN12EnchantUtils16isCompatibleWithEN7Enchant4TypeES1_
    void generateRandomEnchantedItem(Item const&, int, int); // _ZN12EnchantUtils27generateRandomEnchantedItemERK4Itemii
    void generateRandomEnchantedBook(int, int); // _ZN12EnchantUtils27generateRandomEnchantedBookEii
    void generateRandomEnchantedBook(); // _ZN12EnchantUtils27generateRandomEnchantedBookEv
    void generateEnchantedBook(EnchantmentInstance const&); // _ZN12EnchantUtils21generateEnchantedBookERK19EnchantmentInstance
    void generateEnchantedBook(ItemEnchants const&); // _ZN12EnchantUtils21generateEnchantedBookERK12ItemEnchants
    void getBookcaseCount(BlockSource &, Vec3 const&); // _ZN12EnchantUtils16getBookcaseCountER11BlockSourceRK4Vec3
    void getBookCasePositions(BlockSource &, Vec3 const&); // _ZN12EnchantUtils20getBookCasePositionsER11BlockSourceRK4Vec3
    void getEnchantingTablePositions(BlockSource &, Vec3 const&); // _ZN12EnchantUtils27getEnchantingTablePositionsER11BlockSourceRK4Vec3
    std::string getRandomName(); // _ZN12EnchantUtils13getRandomNameB5cxx11Ev
//  std::string getEnchantNameAndLevel(Enchant::Type, int); //TODO: incomplete function definition // _ZN12EnchantUtils22getEnchantNameAndLevelB5cxx11EN7Enchant4TypeEi
    void getEnchantmentId(Util::HashString const&); // _ZN12EnchantUtils16getEnchantmentIdERKN4Util10HashStringE
};
