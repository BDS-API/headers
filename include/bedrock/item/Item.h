#pragma once

#include "../../unmapped/TextureUVCoordinateSet.h"
#include "../util/BlockPos.h"
#include "../block/unmapped/BlockDefinitionGroup.h"
#include "ItemStackBase.h"
#include <memory>
#include <string>
#include "ItemStack.h"
#include "../actor/Actor.h"
#include "../io/IDataInput.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../level/LevelData.h"
#include "../level/Level.h"
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/AtlasItemManager.h"
#include "../../unmapped/TextureAtlasItem.h"
#include "../../json/Value.h"
#include "../util/Vec3.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../io/ReadOnlyBinaryStream.h"
#include "ItemInstance.h"
#include "../actor/unmapped/ActorInfoRegistry.h"
#include "../io/IDataOutput.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "unmapped/ItemDescriptor.h"


class Item {

public:
    class Tier;

    static long mGenerateDenyParticleEffect;
    static std::string TAG_DAMAGE;
    static std::string ICON_DESCRIPTION_PREFIX;
    static long mItemTextureItems;
    static long mCreativeListMutex;
    static long mCreativeList;
    static long mCreativeListStack;
    static long mInCreativeGroup;
    static long mCreativeGroups;
    static long mCreativeGroupInfo;
    static long mInvalidTextureUVCoordinateSet;
    static long mAllowExperimental;
    static long mWorldBaseGameVersion;

    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getBlockShape()const;
    virtual bool isThrowable()const;
    virtual bool isPattern()const;
    virtual bool isStackedByData()const;
    virtual void uniqueAuxValues()const;
    virtual void setMaxUseDuration(int);
    virtual void tearDown();
    virtual void useTimeDepleted(ItemInstance &, Level *, Player *)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual std::string buildCategoryDescriptionName()const;
    virtual void setHandEquipped();
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void setIsGlint(bool);
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void setShouldDespawn(bool);
    virtual void setStackedByData(bool);
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string getInteractText(Player const&)const;
    virtual void setMaxDamage(int);
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getLevelDataForAuxValue(int)const;
    ~Item();
    virtual bool isValidAuxValue(int)const;
    virtual std::string getAuxValuesDescription()const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const;
    virtual void getArmorValue()const;
    virtual void setIconAtlas(std::string const&, int);
    virtual bool isLiquidClipItem(int)const;
    virtual void getMaxUseDuration(ItemInstance const*)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual bool isDestructive(int)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void getIconYOffset()const;
    virtual bool isFertilizer(int)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void setIcon(TextureUVCoordinateSet const&);
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual bool isEmissive(int)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void use(ItemStack &, Player &)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual bool isTintable()const;
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void setExplodable(bool);
    virtual bool canDestroyInCreative()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual void setIcon(std::string const&, int);
    virtual void getMaxDamage()const;
    virtual bool isComplex()const;
    virtual void getEnchantValue()const;
    virtual bool showsDurabilityInCreative()const;
    virtual bool isDye()const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
//  virtual void setCategory(CreativeItemCategory); //TODO: incomplete function definition
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool canBeCharged()const;
//  virtual void setUseAnimation(UseAnimation); //TODO: incomplete function definition
    virtual bool isArmor()const;
    virtual void getCooldownTime()const;
    virtual void getEnchantSlot()const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void getDamageChance(int)const;
    virtual bool isHandEquipped()const;
    virtual bool requiresInteract()const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual void getCooldownType()const;
    virtual void getDamageValue(std::unique_ptr<CompoundTag> const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemInstance &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void setMaxStackSize(unsigned char);
    virtual void getAttackDamage()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool canBeDepleted()const;
    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void setRequiresWorldBuilder(bool);
    virtual void setDamageValue(ItemStackBase &, short)const;
    void alterAvailableCreativeItems(ActorInfoRegistry *, LevelData &);
    void beginCreativeGroup(std::string const&, Block const*, CompoundTag const*);
    std::string getDescriptionId()const;
    std::string getNamespace()const;
    void getTextureUVCoordinateSet(std::string const&, int);
    void updateCustomBlockEntityTag(BlockSource &, ItemStack &, BlockPos &)const;
    void getCreativeCategory()const;
    std::string getRawNameId()const;
    void addCreativeItem(ItemStack const&);
    void getCamera()const;
    void getId()const;
    void getRequiredBaseGameVersion()const;
    void setExperimental();
    std::string getSerializedName()const;
    void beginCreativeGroup(std::string const&, ItemInstance const&);
    bool isFood()const;
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void findCreativeItem(ItemInstance const&);
    void getTextureItem(std::string const&);
    std::string buildDescriptionName(ItemStackBase const&)const;
    void endCreativeGroup();
    void getRendererId()const;
    void shouldDespawn()const;
    void getFood()const;
    void allowOffhand()const;
    void setAllowOffhand(bool);
    void toBlockId(short);
    Item(std::string const&, short);
    void destroySpeedBonus(ItemInstance const&)const;
    bool isExplodable()const;
    std::string getCommandName()const;
    bool isMirroredArt()const;
    void getIconTextureUVSet(TextureAtlasItem const&, int, int);
    void getLegacyBlock()const;
    void beginCreativeGroup(std::string const&, Item *, short, CompoundTag const*);
    void resetId(short);
    void getFrameCount()const;
    void addCreativeItem(Block const&);
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    void getSeed()const;
    void addCreativeItem(Item *, short);
    void initClient(Json::Value &, Json::Value &);
    void beginCreativeGroup(std::string const&, short, short, CompoundTag const*);
//  void _helpChangeInventoryItemInPlace(Actor &, ItemStack &, ItemStack &, ItemAcquisitionMethod)const; //TODO: incomplete function definition
    void addCreativeItem(ItemInstance const&);
    void initCreativeItems(bool, ActorInfoRegistry *, BlockDefinitionGroup *, bool, BaseGameVersion const&, std::function<void (ActorInfoRegistry *, BlockDefinitionGroup *, bool)>);
    void setIsMirroredArt(bool);
    std::string getFullItemName()const;
    void useOn(ItemStack &, Actor &, int, int, int, unsigned char, float, float, float)const;
    void getUseAnimation()const;
    void addCreativeItem(short, short);
    bool canUseSeed(Actor &, BlockPos, unsigned char)const;
    void addOnResetBAIcallback(std::function<void (void)> const&);
    void _textMatch(std::string const&, std::string const&, bool);
    void initServer(Json::Value &);
    void executeOnResetBAIcallbacks()const;
    class Tier {

    public:
        void getAttackDamageBonus()const;
        void getEnchantmentValue()const;
        Tier(int, int, float, int, int);
        void getSpeed()const;
        void getUses()const;
        void getLevel()const;
    };
};
