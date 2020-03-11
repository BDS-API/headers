#pragma once

#include <string>
#include "../io/IDataInput.h"
#include <ratio>
#include "./ItemInstance.h"
#include "unmapped/ItemEnchants.h"
#include "../block/BlockLegacy.h"
#include "../../unmapped/RecipeIngredient.h"
#include "../io/IDataOutput.h"
#include "../actor/Player.h"
#include "../block/unmapped/BlockSource.h"
#include "../io/BinaryStream.h"
#include "../io/ReadOnlyBinaryStream.h"
#include "../nbt/CompoundTag.h"
#include "../../json/Value.h"
#include "./ItemStackBase.h"
#include "../block/actor/BlockActor.h"
#include <memory>
#include "../util/Tick.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include <vector>
#include "../../unmapped/Block.h"


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

    virtual ~ItemStackBase();

    bool isValid()const;
    bool isItem()const;
    bool isEmptyStack()const;
    void getStackSize()const;
    void getItem()const;
    void setStackSize(unsigned char);
    void _write(BinaryStream &)const;
    void _read(ReadOnlyBinaryStream &);
    bool isInstance(Item const&)const;
    void sameItem(int, int)const;
    bool hasFeedingAnimation()const;
    void forceSetCount(unsigned char);
    ItemStackBase();
    void init(int, int, int);
    ItemStackBase(BlockLegacy const&, int);
    void init(BlockLegacy const&, int);
    ItemStackBase(Block const&, int, CompoundTag const*);
    ItemStackBase(BlockLegacy const&, int, short);
    ItemStackBase(Item const&);
    void init(Item const&, int, int, CompoundTag const*);
    ItemStackBase(Item const&, int);
    ItemStackBase(Item const&, int, int);
    ItemStackBase(Item const&, int, int, CompoundTag const*);
    ItemStackBase(ItemStackBase const&);
    void getId()const;
    void _makeChargedItemFromUserData();
    void _cloneComponents(ItemStackBase const&);
    ItemStackBase(RecipeIngredient const&);
    void getDescriptor()const;
    void getDamageValue()const;
    void _setItem(int);
    void setAuxValue(short);
    void setNull();
    bool isNull()const;
    void _hasComponents()const;
    void clearChargedItem();
    void _initComponents();
    void add(int);
    void set(int);
    void remove(int);
    void getMaxStackSize()const;
    bool hasUserData()const;
    bool hasCompoundTextUserData()const;
    void getUserData()const;
    bool hasSameUserData(ItemStackBase const&)const;
    bool hasSameUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    bool hasSameAuxValue(ItemStackBase const&)const;
    void getLegacyBlock()const;
    void getAuxValue()const;
    bool isDamageableItem()const;
    void setUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getNetworkUserData()const;
    void addCustomUserData(BlockActor &, BlockSource &);
    bool isGlint()const;
    bool showsDurabilityInCreative()const;
    void setJustBrewed(bool);
    bool wasJustBrewed()const;
    void startCoolDown(Player *)const;
    bool isEquivalentArmor(ItemStackBase const&)const;
    void retrieveIDFromIDAux(int);
    void retrieveEnchantFromIDAux(int);
    void retrieveAuxValFromIDAux(int);
    bool isValidAuxValue(int)const;
    bool isBlock()const;
    bool isThrowable()const;
    bool isExplodable()const;
    bool isPattern()const;
    void refreshedInContainer(Level &);
    bool isEnchanted()const;
    void getEnchantsFromUserData()const;
    void getEnchantSlot()const;
    void saveEnchantsToUserData(ItemEnchants const&);
    void getEnchantValue()const;
    bool isEnchantingBook()const;
    bool isFullStack()const;
    bool isStackable()const;
    bool isDamaged()const;
    bool isStackable(ItemStackBase const&)const;
    bool isStackedByData()const;
    bool componentsMatch(ItemStackBase const&)const;
    void setDamageValue(short);
    void getMaxDamage()const;
    void hurtAndBreak(int, Actor *);
    void getAttackDamage()const;
    bool canDestroySpecial(Block const&)const;
    void snap(Player *);
    void sameItem(ItemStackBase const&)const;
    void sameItemAndAux(ItemStackBase const&)const;
    std::string getDescriptionId()const;
    std::string getCategoryName()const;
    std::string getName()const;
    bool hasCustomHoverName()const;
    std::string getCustomName()const;
    std::string getRawNameId()const;
    void getRendererId()const;
    std::string getEffectName()const;
    std::string getFormattedHovertext(Level &, bool)const;
    bool hasComponent(std::string const&)const;
    void getBlock()const;
    void setBlock(Block const*);
    void getIdAux()const;
    void getIdAuxEnchanted()const;
    bool isInstance(BlockLegacy const&)const;
    std::string toString()const;
    void matches(ItemStackBase const&)const;
    bool matchesItem(ItemStackBase const&)const;
    bool matchesChargedItem(ItemStackBase const&)const;
    bool hasChargedItem()const;
    void getChargedItem()const;
    void getColor()const;
    void save()const;
    void _saveComponents(CompoundTag &)const;
    void load(CompoundTag const&);
    void _loadItem(CompoundTag const&);
    void load(CompoundTag const&, Level &);
    void operator!=(ItemStackBase const&)const;
    void operator==(ItemStackBase const&)const;
    void getIcon(int, bool)const;
    void getUseAnimation()const;
    bool isArmorItem()const;
    bool isHorseArmorItem()const;
    bool isWearableItem()const;
    bool isOffhandItem()const;
    bool isMusicDiscItem()const;
    bool isPotionItem()const;
    bool isLiquidClipItem()const;
    std::string _getHoverFormattingPrefix()const;
    std::string getHoverName()const;
    void setCustomName(std::string const&);
    std::string getCustomLore()const;
    void setCustomLore(std::vector<std::string, std::allocator<std::string>> const&);
    void resetHoverName();
    void getBaseRepairCost()const;
    void setRepairCost(int);
    bool canPlaceOn(Block const*)const;
    bool canDestroy(Block const*)const;
    void getBlockingTick()const;
    void setBlockingTick(Tick);
    void getPickupPopPercentage()const;
    void getIsValidPickupTime()const;
    void getPickupTime()const;
    void setPickupTime();
//  void setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void setShowPickUp(bool);
    void setChargedItem(ItemInstance const&, bool);
    void _setChargedItem(ItemInstance const&);
    bool canBeCharged()const;
    void _loadComponents(CompoundTag const&);
    void addComponents(Json::Value const&, std::string &);
    bool isValidComponent(std::string const&);
    void updateComponent(std::string const&, Json::Value const&);
    void _updateCompareHashes();
    void serializeComponents(IDataOutput &)const;
    void deserializeComponents(IDataInput &);
    bool isExperimental()const;
    void getRequiredBaseGameVersion()const;
};
