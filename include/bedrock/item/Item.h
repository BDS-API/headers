#pragma once

#include <memory>
#include <string>
#include "../util/BlockPos.h"
#include <functional>


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

    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool showsDurabilityInCreative()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getMaxDamage()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void releaseUsing(ItemInstance &, Player *, int)const;
    virtual std::string getAuxValuesDescription()const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual bool isHandEquipped()const;
    virtual void setIcon(std::string const&, int);
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void setMaxUseDuration(int);
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getArmorValue()const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual bool isEmissive(int)const;
    virtual void setHandEquipped();
//  virtual void setCategory(CreativeItemCategory); //TODO: incomplete function definition
    virtual bool isPattern()const;
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    ~Item();
    virtual void getBlockShape()const;
    virtual bool canDestroyInCreative()const;
    virtual bool isTintable()const;
    virtual bool isStackedByData()const;
    virtual void setMaxDamage(int);
    virtual bool canDestroySpecial(Block const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getMaxUseDuration(ItemInstance const*)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual std::string buildCategoryDescriptionName()const;
    virtual bool canBeCharged()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void getAttackDamage()const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual void setStackedByData(bool);
    virtual void getIconYOffset()const;
    virtual void setIcon(TextureUVCoordinateSet const&);
    virtual bool canBeDepleted()const;
    virtual void setDamageValue(ItemStackBase &, short)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual bool isFertilizer(int)const;
    virtual void setMaxStackSize(unsigned char);
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getCooldownType()const;
    virtual bool isArmor()const;
//  virtual void setUseAnimation(UseAnimation); //TODO: incomplete function definition
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual bool isLiquidClipItem(int)const;
    virtual void useTimeDepleted(ItemInstance &, Level *, Player *)const;
    virtual bool requiresInteract()const;
    virtual void setIconAtlas(std::string const&, int);
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void setShouldDespawn(bool);
    virtual bool isDestructive(int)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual void getEnchantValue()const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void setIsGlint(bool);
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual bool isComplex()const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual std::string getInteractText(Player const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void uniqueAuxValues()const;
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void tearDown();
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual void getCooldownTime()const;
    virtual bool isThrowable()const;
    virtual void getDamageChance(int)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getEnchantSlot()const;
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual bool isDye()const;
    virtual void getDamageValue(std::unique_ptr<CompoundTag> const&)const;
    virtual void setExplodable(bool);
    virtual void setRequiresWorldBuilder(bool);
    void initClient(Json::Value &, Json::Value &);
    void getFrameCount()const;
    bool canUseSeed(Actor &, BlockPos, unsigned char)const;
    bool isMirroredArt()const;
    void getLegacyBlock()const;
    void getRequiredBaseGameVersion()const;
    void getTextureItem(std::string const&);
    std::string getRawNameId()const;
    void setIsMirroredArt(bool);
    void beginCreativeGroup(std::string const&, Block const*, CompoundTag const*);
    bool isExplodable()const;
    void getCreativeCategory()const;
    void getIconTextureUVSet(TextureAtlasItem const&, int, int);
    bool isFood()const;
    void shouldDespawn()const;
    void beginCreativeGroup(std::string const&, ItemInstance const&);
//  void _helpChangeInventoryItemInPlace(Actor &, ItemStack &, ItemStack &, ItemAcquisitionMethod)const; //TODO: incomplete function definition
    void setExperimental();
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    void initServer(Json::Value &);
    void resetId(short);
    void destroySpeedBonus(ItemInstance const&)const;
    void findCreativeItem(ItemInstance const&);
    void addCreativeItem(ItemInstance const&);
    void useOn(ItemStack &, Actor &, int, int, int, unsigned char, float, float, float)const;
    void getId()const;
    void toBlockId(short);
    void addCreativeItem(short, short);
    void getUseAnimation()const;
    void executeOnResetBAIcallbacks()const;
    void beginCreativeGroup(std::string const&, Item *, short, CompoundTag const*);
    void addCreativeItem(ItemStack const&);
    std::string getCommandName()const;
    void getSeed()const;
    void updateCustomBlockEntityTag(BlockSource &, ItemStack &, BlockPos &)const;
    void addCreativeItem(Item *, short);
    void alterAvailableCreativeItems(ActorInfoRegistry *, LevelData &);
    void addCreativeItem(Block const&);
    void getFood()const;
    void allowOffhand()const;
    void addOnResetBAIcallback(std::function<void (void)> const&);
    void getRendererId()const;
    void getCamera()const;
    void setAllowOffhand(bool);
    std::string getNamespace()const;
    std::string buildDescriptionName(ItemStackBase const&)const;
    std::string getSerializedName()const;
    void initCreativeItems(bool, ActorInfoRegistry *, BlockDefinitionGroup *, bool, BaseGameVersion const&, std::function<void (ActorInfoRegistry *, BlockDefinitionGroup *, bool)>);
    void _textMatch(std::string const&, std::string const&, bool);
    std::string getDescriptionId()const;
    void endCreativeGroup();
    std::string getFullItemName()const;
    void getTextureUVCoordinateSet(std::string const&, int);
    void beginCreativeGroup(std::string const&, short, short, CompoundTag const*);
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    Item(std::string const&, short);
    class Tier {

    public:
        void getUses()const;
        void getLevel()const;
        void getAttackDamageBonus()const;
        Tier(int, int, float, int, int);
        void getSpeed()const;
        void getEnchantmentValue()const;
    };
};
