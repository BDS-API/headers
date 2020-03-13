#pragma once

#include <string>
#include <memory>
#include "../util/Tick.h"
#include <vector>


class ItemStackBase {

public:
    static long MAX_STACK_SIZE;
    static long sPickupPopDuration;
    static std::string TAG_DISPLAY;
    static std::string TAG_DISPLAY_NAME;
    static std::string TAG_LORE;
    static std::string TAG_REPAIR_COST;
    static std::string TAG_ENCHANTS;
    static std::string TAG_CAN_PLACE_ON;
    static std::string TAG_CAN_DESTROY;
    static std::string TAG_STORE_CAN_PLACE_ON;
    static std::string TAG_STORE_CAN_DESTROY;
    static std::string TAG_CHARGED_ITEM;

    ~ItemStackBase(); // _ZN13ItemStackBaseD2Ev
    bool isValid()const; // _ZNK13ItemStackBase7isValidEv
    bool isItem()const; // _ZNK13ItemStackBase6isItemEv
    bool isEmptyStack()const; // _ZNK13ItemStackBase12isEmptyStackEv
    void getStackSize()const; // _ZNK13ItemStackBase12getStackSizeEv
    void getItem()const; // _ZNK13ItemStackBase7getItemEv
    void setStackSize(unsigned char); // _ZN13ItemStackBase12setStackSizeEh
    void _write(BinaryStream &)const; // _ZNK13ItemStackBase6_writeER12BinaryStream
    void _read(ReadOnlyBinaryStream &); // _ZN13ItemStackBase5_readER20ReadOnlyBinaryStream
    bool isInstance(Item const&)const; // _ZNK13ItemStackBase10isInstanceERK4Item
    void sameItem(int, int)const; // _ZNK13ItemStackBase8sameItemEii
    bool hasFeedingAnimation()const; // _ZNK13ItemStackBase19hasFeedingAnimationEv
    void forceSetCount(unsigned char); // _ZN13ItemStackBase13forceSetCountEh
    ItemStackBase(); // _ZN13ItemStackBaseC2Ev
    void init(int, int, int); // _ZN13ItemStackBase4initEiii
    ItemStackBase(BlockLegacy const&, int); // _ZN13ItemStackBaseC2ERK11BlockLegacyi
    void init(BlockLegacy const&, int); // _ZN13ItemStackBase4initERK11BlockLegacyi
    ItemStackBase(Block const&, int, CompoundTag const*); // _ZN13ItemStackBaseC2ERK5BlockiPK11CompoundTag
    ItemStackBase(BlockLegacy const&, int, short); // _ZN13ItemStackBaseC2ERK11BlockLegacyis
    ItemStackBase(Item const&); // _ZN13ItemStackBaseC2ERK4Item
    void init(Item const&, int, int, CompoundTag const*); // _ZN13ItemStackBase4initERK4ItemiiPK11CompoundTag
    ItemStackBase(Item const&, int); // _ZN13ItemStackBaseC2ERK4Itemi
    ItemStackBase(Item const&, int, int); // _ZN13ItemStackBaseC2ERK4Itemii
    ItemStackBase(Item const&, int, int, CompoundTag const*); // _ZN13ItemStackBaseC2ERK4ItemiiPK11CompoundTag
    ItemStackBase(ItemStackBase const&); // _ZN13ItemStackBaseC2ERKS_
    void getId()const; // _ZNK13ItemStackBase5getIdEv
    void _makeChargedItemFromUserData(); // _ZN13ItemStackBase28_makeChargedItemFromUserDataEv
    void _cloneComponents(ItemStackBase const&); // _ZN13ItemStackBase16_cloneComponentsERKS_
    ItemStackBase(RecipeIngredient const&); // _ZN13ItemStackBaseC2ERK16RecipeIngredient
    void getDescriptor()const; // _ZNK13ItemStackBase13getDescriptorEv
    void getDamageValue()const; // _ZNK13ItemStackBase14getDamageValueEv
    void _setItem(int); // _ZN13ItemStackBase8_setItemEi
    void setAuxValue(short); // _ZN13ItemStackBase11setAuxValueEs
    void setNull(); // _ZN13ItemStackBase7setNullEv
    bool isNull()const; // _ZNK13ItemStackBase6isNullEv
    void _hasComponents()const; // _ZNK13ItemStackBase14_hasComponentsEv
    void clearChargedItem(); // _ZN13ItemStackBase16clearChargedItemEv
    void _initComponents(); // _ZN13ItemStackBase15_initComponentsEv
    void add(int); // _ZN13ItemStackBase3addEi
    void set(int); // _ZN13ItemStackBase3setEi
    void remove(int); // _ZN13ItemStackBase6removeEi
    void getMaxStackSize()const; // _ZNK13ItemStackBase15getMaxStackSizeEv
    bool hasUserData()const; // _ZNK13ItemStackBase11hasUserDataEv
    bool hasCompoundTextUserData()const; // _ZNK13ItemStackBase23hasCompoundTextUserDataEv
    void getUserData()const; // _ZNK13ItemStackBase11getUserDataEv
    bool hasSameUserData(ItemStackBase const&)const; // _ZNK13ItemStackBase15hasSameUserDataERKS_
    bool hasSameUserData(std::unique_ptr<CompoundTag> const&)const; // _ZNK13ItemStackBase15hasSameUserDataERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    bool hasSameAuxValue(ItemStackBase const&)const; // _ZNK13ItemStackBase15hasSameAuxValueERKS_
    void getLegacyBlock()const; // _ZNK13ItemStackBase14getLegacyBlockEv
    void getAuxValue()const; // _ZNK13ItemStackBase11getAuxValueEv
    bool isDamageableItem()const; // _ZNK13ItemStackBase16isDamageableItemEv
    void setUserData(std::unique_ptr<CompoundTag>); // _ZN13ItemStackBase11setUserDataESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void getNetworkUserData()const; // _ZNK13ItemStackBase18getNetworkUserDataEv
    void addCustomUserData(BlockActor &, BlockSource &); // _ZN13ItemStackBase17addCustomUserDataER10BlockActorR11BlockSource
    bool isGlint()const; // _ZNK13ItemStackBase7isGlintEv
    bool showsDurabilityInCreative()const; // _ZNK13ItemStackBase25showsDurabilityInCreativeEv
    void setJustBrewed(bool); // _ZN13ItemStackBase13setJustBrewedEb
    bool wasJustBrewed()const; // _ZNK13ItemStackBase13wasJustBrewedEv
    void startCoolDown(Player *)const; // _ZNK13ItemStackBase13startCoolDownEP6Player
    bool isEquivalentArmor(ItemStackBase const&)const; // _ZNK13ItemStackBase17isEquivalentArmorERKS_
    void retrieveIDFromIDAux(int); // _ZN13ItemStackBase19retrieveIDFromIDAuxEi
    void retrieveEnchantFromIDAux(int); // _ZN13ItemStackBase24retrieveEnchantFromIDAuxEi
    void retrieveAuxValFromIDAux(int); // _ZN13ItemStackBase23retrieveAuxValFromIDAuxEi
    bool isValidAuxValue(int)const; // _ZNK13ItemStackBase15isValidAuxValueEi
    bool isBlock()const; // _ZNK13ItemStackBase7isBlockEv
    bool isThrowable()const; // _ZNK13ItemStackBase11isThrowableEv
    bool isExplodable()const; // _ZNK13ItemStackBase12isExplodableEv
    bool isPattern()const; // _ZNK13ItemStackBase9isPatternEv
    void refreshedInContainer(Level &); // _ZN13ItemStackBase20refreshedInContainerER5Level
    bool isEnchanted()const; // _ZNK13ItemStackBase11isEnchantedEv
    void getEnchantsFromUserData()const; // _ZNK13ItemStackBase23getEnchantsFromUserDataEv
    void getEnchantSlot()const; // _ZNK13ItemStackBase14getEnchantSlotEv
    void saveEnchantsToUserData(ItemEnchants const&); // _ZN13ItemStackBase22saveEnchantsToUserDataERK12ItemEnchants
    void getEnchantValue()const; // _ZNK13ItemStackBase15getEnchantValueEv
    bool isEnchantingBook()const; // _ZNK13ItemStackBase16isEnchantingBookEv
    bool isFullStack()const; // _ZNK13ItemStackBase11isFullStackEv
    bool isStackable()const; // _ZNK13ItemStackBase11isStackableEv
    bool isDamaged()const; // _ZNK13ItemStackBase9isDamagedEv
    bool isStackable(ItemStackBase const&)const; // _ZNK13ItemStackBase11isStackableERKS_
    bool isStackedByData()const; // _ZNK13ItemStackBase15isStackedByDataEv
    bool componentsMatch(ItemStackBase const&)const; // _ZNK13ItemStackBase15componentsMatchERKS_
    void setDamageValue(short); // _ZN13ItemStackBase14setDamageValueEs
    void getMaxDamage()const; // _ZNK13ItemStackBase12getMaxDamageEv
    void hurtAndBreak(int, Actor *); // _ZN13ItemStackBase12hurtAndBreakEiP5Actor
    void getAttackDamage()const; // _ZNK13ItemStackBase15getAttackDamageEv
    bool canDestroySpecial(Block const&)const; // _ZNK13ItemStackBase17canDestroySpecialERK5Block
    void snap(Player *); // _ZN13ItemStackBase4snapEP6Player
    void sameItem(ItemStackBase const&)const; // _ZNK13ItemStackBase8sameItemERKS_
    void sameItemAndAux(ItemStackBase const&)const; // _ZNK13ItemStackBase14sameItemAndAuxERKS_
    std::string getDescriptionId()const; // _ZNK13ItemStackBase16getDescriptionIdB5cxx11Ev
    std::string getCategoryName()const; // _ZNK13ItemStackBase15getCategoryNameB5cxx11Ev
    std::string getName()const; // _ZNK13ItemStackBase7getNameB5cxx11Ev
    bool hasCustomHoverName()const; // _ZNK13ItemStackBase18hasCustomHoverNameEv
    std::string getCustomName()const; // _ZNK13ItemStackBase13getCustomNameB5cxx11Ev
    std::string getRawNameId()const; // _ZNK13ItemStackBase12getRawNameIdB5cxx11Ev
    void getRendererId()const; // _ZNK13ItemStackBase13getRendererIdEv
    std::string getEffectName()const; // _ZNK13ItemStackBase13getEffectNameB5cxx11Ev
    std::string getFormattedHovertext(Level &, bool)const; // _ZNK13ItemStackBase21getFormattedHovertextB5cxx11ER5Levelb
    bool hasComponent(std::string const&)const; // _ZNK13ItemStackBase12hasComponentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBlock()const; // _ZNK13ItemStackBase8getBlockEv
    void setBlock(Block const*); // _ZN13ItemStackBase8setBlockEPK5Block
    void getIdAux()const; // _ZNK13ItemStackBase8getIdAuxEv
    void getIdAuxEnchanted()const; // _ZNK13ItemStackBase17getIdAuxEnchantedEv
    bool isInstance(BlockLegacy const&)const; // _ZNK13ItemStackBase10isInstanceERK11BlockLegacy
    std::string toString()const; // _ZNK13ItemStackBase8toStringB5cxx11Ev
    void matches(ItemStackBase const&)const; // _ZNK13ItemStackBase7matchesERKS_
    bool matchesItem(ItemStackBase const&)const; // _ZNK13ItemStackBase11matchesItemERKS_
    bool matchesChargedItem(ItemStackBase const&)const; // _ZNK13ItemStackBase18matchesChargedItemERKS_
    bool hasChargedItem()const; // _ZNK13ItemStackBase14hasChargedItemEv
    void getChargedItem()const; // _ZNK13ItemStackBase14getChargedItemEv
    void getColor()const; // _ZNK13ItemStackBase8getColorEv
    void save()const; // _ZNK13ItemStackBase4saveEv
    void _saveComponents(CompoundTag &)const; // _ZNK13ItemStackBase15_saveComponentsER11CompoundTag
    void load(CompoundTag const&); // _ZN13ItemStackBase4loadERK11CompoundTag
    void _loadItem(CompoundTag const&); // _ZN13ItemStackBase9_loadItemERK11CompoundTag
    void load(CompoundTag const&, Level &); // _ZN13ItemStackBase4loadERK11CompoundTagR5Level
    void operator!=(ItemStackBase const&)const; // _ZNK13ItemStackBaseneERKS_
    void operator==(ItemStackBase const&)const; // _ZNK13ItemStackBaseeqERKS_
    void getIcon(int, bool)const; // _ZNK13ItemStackBase7getIconEib
    void getUseAnimation()const; // _ZNK13ItemStackBase15getUseAnimationEv
    bool isArmorItem()const; // _ZNK13ItemStackBase11isArmorItemEv
    bool isHorseArmorItem()const; // _ZNK13ItemStackBase16isHorseArmorItemEv
    bool isWearableItem()const; // _ZNK13ItemStackBase14isWearableItemEv
    bool isOffhandItem()const; // _ZNK13ItemStackBase13isOffhandItemEv
    bool isMusicDiscItem()const; // _ZNK13ItemStackBase15isMusicDiscItemEv
    bool isPotionItem()const; // _ZNK13ItemStackBase12isPotionItemEv
    bool isLiquidClipItem()const; // _ZNK13ItemStackBase16isLiquidClipItemEv
    std::string _getHoverFormattingPrefix()const; // _ZNK13ItemStackBase25_getHoverFormattingPrefixB5cxx11Ev
    std::string getHoverName()const; // _ZNK13ItemStackBase12getHoverNameB5cxx11Ev
    void setCustomName(std::string const&); // _ZN13ItemStackBase13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getCustomLore()const; // _ZNK13ItemStackBase13getCustomLoreB5cxx11Ev
    void setCustomLore(std::vector<std::string> const&); // _ZN13ItemStackBase13setCustomLoreERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    void resetHoverName(); // _ZN13ItemStackBase14resetHoverNameEv
    void getBaseRepairCost()const; // _ZNK13ItemStackBase17getBaseRepairCostEv
    void setRepairCost(int); // _ZN13ItemStackBase13setRepairCostEi
    bool canPlaceOn(Block const*)const; // _ZNK13ItemStackBase10canPlaceOnEPK5Block
    bool canDestroy(Block const*)const; // _ZNK13ItemStackBase10canDestroyEPK5Block
    void getBlockingTick()const; // _ZNK13ItemStackBase15getBlockingTickEv
    void setBlockingTick(Tick); // _ZN13ItemStackBase15setBlockingTickE4Tick
    void getPickupPopPercentage()const; // _ZNK13ItemStackBase22getPickupPopPercentageEv
    void getIsValidPickupTime()const; // _ZNK13ItemStackBase20getIsValidPickupTimeEv
    void getPickupTime()const; // _ZNK13ItemStackBase13getPickupTimeEv
    void setPickupTime(); // _ZN13ItemStackBase13setPickupTimeEv
//  void setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN13ItemStackBase13setPickupTimeENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void setShowPickUp(bool); // _ZN13ItemStackBase13setShowPickUpEb
    void setChargedItem(ItemInstance const&, bool); // _ZN13ItemStackBase14setChargedItemERK12ItemInstanceb
    void _setChargedItem(ItemInstance const&); // _ZN13ItemStackBase15_setChargedItemERK12ItemInstance
    bool canBeCharged()const; // _ZNK13ItemStackBase12canBeChargedEv
    void _loadComponents(CompoundTag const&); // _ZN13ItemStackBase15_loadComponentsERK11CompoundTag
    void addComponents(Json::Value const&, std::string &); // _ZN13ItemStackBase13addComponentsERKN4Json5ValueERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isValidComponent(std::string const&); // _ZN13ItemStackBase16isValidComponentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void updateComponent(std::string const&, Json::Value const&); // _ZN13ItemStackBase15updateComponentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void _updateCompareHashes(); // _ZN13ItemStackBase20_updateCompareHashesEv
    void serializeComponents(IDataOutput &)const; // _ZNK13ItemStackBase19serializeComponentsER11IDataOutput
    void deserializeComponents(IDataInput &); // _ZN13ItemStackBase21deserializeComponentsER10IDataInput
    bool isExperimental()const; // _ZNK13ItemStackBase14isExperimentalEv
    void getRequiredBaseGameVersion()const; // _ZNK13ItemStackBase26getRequiredBaseGameVersionEv
};
