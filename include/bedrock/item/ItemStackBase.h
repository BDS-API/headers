#pragma once

#include "../block/BlockLegacy.h"
#include <memory>
#include <string>
#include "../actor/Actor.h"
#include "../io/IDataInput.h"
#include "../../unmapped/Block.h"
#include "../../unmapped/RecipeIngredient.h"
#include "../level/Level.h"
#include "../block/unmapped/BlockSource.h"
#include "../block/actor/BlockActor.h"
#include "../../json/Value.h"
#include "unmapped/ItemEnchants.h"
#include <vector>
#include "../io/ReadOnlyBinaryStream.h"
#include "ItemInstance.h"
#include "../io/BinaryStream.h"
#include "../io/IDataOutput.h"
#include "../util/Tick.h"
#include <ratio>
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "Item.h"


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

    ~ItemStackBase();
    void _read(ReadOnlyBinaryStream &);
    void sameItemAndAux(ItemStackBase const&)const;
    void setStackSize(unsigned char);
    std::string getCustomName()const;
    void getPickupPopPercentage()const;
    void retrieveIDFromIDAux(int);
    bool isLiquidClipItem()const;
    void retrieveEnchantFromIDAux(int);
    bool canBeCharged()const;
    ItemStackBase(ItemStackBase const&);
    bool isStackedByData()const;
    void resetHoverName();
    void getRequiredBaseGameVersion()const;
    bool isValidComponent(std::string const&);
    void saveEnchantsToUserData(ItemEnchants const&);
    bool isValid()const;
    bool wasJustBrewed()const;
    bool hasChargedItem()const;
    bool hasCompoundTextUserData()const;
    void serializeComponents(IDataOutput &)const;
    bool isStackable(ItemStackBase const&)const;
    bool isStackable()const;
    void getMaxStackSize()const;
    bool isNull()const;
    void setUserData(std::unique_ptr<CompoundTag>);
    void getBlock()const;
    void setRepairCost(int);
    bool isInstance(Item const&)const;
    void remove(int);
    ItemStackBase(Item const&);
//  void setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    bool isGlint()const;
    void setJustBrewed(bool);
    ItemStackBase(RecipeIngredient const&);
    bool isWearableItem()const;
    void setCustomLore(std::vector<std::string> const&);
    bool isThrowable()const;
    bool isEmptyStack()const;
    bool isEnchantingBook()const;
    std::string getHoverName()const;
    void setAuxValue(short);
    void snap(Player *);
    std::string getEffectName()const;
    ItemStackBase();
    bool matchesItem(ItemStackBase const&)const;
    std::string toString()const;
    bool isValidAuxValue(int)const;
    void getColor()const;
    void getIdAux()const;
    void setNull();
    void getPickupTime()const;
    bool hasUserData()const;
    void init(BlockLegacy const&, int);
    void hurtAndBreak(int, Actor *);
    void setPickupTime();
    void _updateCompareHashes();
    void init(Item const&, int, int, CompoundTag const*);
    void getEnchantSlot()const;
    bool isFullStack()const;
    void updateComponent(std::string const&, Json::Value const&);
    void setCustomName(std::string const&);
    ItemStackBase(Item const&, int, int, CompoundTag const*);
    bool isEnchanted()const;
    void _loadItem(CompoundTag const&);
    bool isBlock()const;
    bool isDamaged()const;
    void getBlockingTick()const;
    bool isExplodable()const;
    bool hasFeedingAnimation()const;
    void addCustomUserData(BlockActor &, BlockSource &);
    std::string getDescriptionId()const;
    std::string getCategoryName()const;
    void add(int);
    bool isMusicDiscItem()const;
    bool isInstance(BlockLegacy const&)const;
    void startCoolDown(Player *)const;
    void init(int, int, int);
    void getStackSize()const;
    void getUseAnimation()const;
    void _setChargedItem(ItemInstance const&);
    bool isEquivalentArmor(ItemStackBase const&)const;
    bool isExperimental()const;
    ItemStackBase(BlockLegacy const&, int, short);
    void set(int);
    void sameItem(ItemStackBase const&)const;
    void setBlockingTick(Tick);
    std::string getFormattedHovertext(Level &, bool)const;
    bool componentsMatch(ItemStackBase const&)const;
    void retrieveAuxValFromIDAux(int);
    void getIdAuxEnchanted()const;
    bool canPlaceOn(Block const*)const;
    void getAttackDamage()const;
    void getDamageValue()const;
    bool matchesChargedItem(ItemStackBase const&)const;
    void getIcon(int, bool)const;
    void _write(BinaryStream &)const;
    void getId()const;
    void operator==(ItemStackBase const&)const;
    bool hasSameUserData(ItemStackBase const&)const;
    void setDamageValue(short);
    void getMaxDamage()const;
    void save()const;
    void getLegacyBlock()const;
    void forceSetCount(unsigned char);
    void matches(ItemStackBase const&)const;
    void clearChargedItem();
    void _cloneComponents(ItemStackBase const&);
    std::string getName()const;
    bool isItem()const;
    void refreshedInContainer(Level &);
    std::string _getHoverFormattingPrefix()const;
    void getBaseRepairCost()const;
    void setShowPickUp(bool);
    void _loadComponents(CompoundTag const&);
    void load(CompoundTag const&, Level &);
    void setBlock(Block const*);
    void setChargedItem(ItemInstance const&, bool);
    bool canDestroy(Block const*)const;
    void sameItem(int, int)const;
    void _hasComponents()const;
    void _setItem(int);
    bool isPotionItem()const;
    void getIsValidPickupTime()const;
    void getUserData()const;
    std::string getRawNameId()const;
    ItemStackBase(Item const&, int);
    ItemStackBase(Block const&, int, CompoundTag const*);
    bool isOffhandItem()const;
    bool hasComponent(std::string const&)const;
    void addComponents(Json::Value const&, std::string &);
    ItemStackBase(Item const&, int, int);
    ItemStackBase(BlockLegacy const&, int);
    bool isDamageableItem()const;
    void getNetworkUserData()const;
    bool isPattern()const;
    void getEnchantsFromUserData()const;
    bool hasCustomHoverName()const;
    bool isHorseArmorItem()const;
    void operator!=(ItemStackBase const&)const;
    void getDescriptor()const;
    void getItem()const;
    bool canDestroySpecial(Block const&)const;
    void deserializeComponents(IDataInput &);
    bool hasSameUserData(std::unique_ptr<CompoundTag> const&)const;
    std::string getCustomLore()const;
    void getRendererId()const;
    bool hasSameAuxValue(ItemStackBase const&)const;
    void _saveComponents(CompoundTag &)const;
    void load(CompoundTag const&);
    void _makeChargedItemFromUserData();
    void getEnchantValue()const;
    void getAuxValue()const;
    bool showsDurabilityInCreative()const;
    bool isArmorItem()const;
    void getChargedItem()const;
    void _initComponents();
};
