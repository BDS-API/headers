#pragma once

#include "../../unmapped/TextureUVCoordinateSet"
#include "../util/Vec3"
#include "../../unmapped/TextureAtlasItem"
#include "../nbt/CompoundTag"
#include "../io/IDataOutput"
#include "../actor/Player"
#include "../container/Container"
#include "../block/unmapped/BlockSource"
#include "../level/Level"
#include "../io/IDataInput"
#include "../actor/unmapped/ActorInfoRegistry"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../io/ReadOnlyBinaryStream"
#include "../../unmapped/BaseGameVersion"
#include "../level/LevelData"
#include "../../json/Value"
#include "../actor/Mob"
#include "../actor/Actor"
#include "../../unmapped/AtlasItemManager"
#include "../block/unmapped/BlockDefinitionGroup"
#include "unmapped/ItemDescriptor"


class Item {

public:
    static long mGenerateDenyParticleEffect;
    static long TAG_DAMAGE[abi:cxx11];
    static long ICON_DESCRIPTION_PREFIX[abi:cxx11];
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

    virtual Item::~Item()
    virtual void tearDown();
    virtual void getMaxUseDuration(ItemInstance const*)const;
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual void setMaxStackSize(unsigned char);
    virtual void setCategory(CreativeItemCategory);
    virtual void setStackedByData(bool);
    virtual void setMaxDamage(int);
    virtual void setHandEquipped();
    virtual void setUseAnimation(UseAnimation);
    virtual void setMaxUseDuration(int);
    virtual void setRequiresWorldBuilder(bool);
    virtual void setExplodable(bool);
    virtual void setIsGlint(bool);
    virtual void setShouldDespawn(bool);
    virtual void getBlockShape()const;
    virtual bool canBeDepleted()const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isStackedByData()const;
    virtual void getMaxDamage()const;
    virtual void getAttackDamage()const;
    virtual bool isHandEquipped()const;
    virtual bool isArmor()const;
    virtual bool isDye()const;
    virtual bool isFertilizer(int)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable()const;
    virtual bool isPattern()const;
    virtual bool showsDurabilityInCreative()const;
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool canDestroyInCreative()const;
    virtual bool isDestructive(int)const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool requiresInteract()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;
    virtual void getArmorValue()const;
    virtual bool isComplex()const;
    virtual bool isValidAuxValue(int)const;
    virtual void getDamageChance(int)const;
    virtual void uniqueAuxValues()const;
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual bool isTintable()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void useTimeDepleted(ItemInstance &, Level *, Player *)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemInstance &, Player *, int)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void buildCategoryDescriptionName()const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void getCooldownType()const;
    virtual void getCooldownTime()const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual void getDamageValue(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void setDamageValue(ItemStackBase &, short)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void getInteractText(Player const&)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;
    virtual void setIcon(std::string const&, int);
    virtual void setIcon(TextureUVCoordinateSet const&);
    virtual void setIconAtlas(std::string const&, int);
    virtual bool canBeCharged()const;
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void getAuxValuesDescription()const;
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void getId()const;
    void getLegacyBlock()const;
    void getCreativeCategory()const;
    void shouldDespawn()const;
    void toBlockId(short);
    void resetId(short);
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void initServer(Json::Value &);
    void initClient(Json::Value &, Json::Value &);
    void alterAvailableCreativeItems(ActorInfoRegistry *, LevelData &);
    void beginCreativeGroup(std::string const&, ItemInstance const&);
    void beginCreativeGroup(std::string const&, short, short, CompoundTag const*);
    void beginCreativeGroup(std::string const&, Block const*, CompoundTag const*);
    void beginCreativeGroup(std::string const&, Item*, short, CompoundTag const*);
    void endCreativeGroup();
    void addCreativeItem(short, short);
    void addCreativeItem(ItemInstance const&);
    void addCreativeItem(Block const&);
    void addCreativeItem(Item*, short);
    void addCreativeItem(ItemStack const&);
    void findCreativeItem(ItemInstance const&);
    void initCreativeItems(bool, ActorInfoRegistry *, BlockDefinitionGroup *, bool, BaseGameVersion const&, std::function<void ()(ActorInfoRegistry *, BlockDefinitionGroup *, bool)>);
    void destroySpeedBonus(ItemInstance const&)const;
    void _helpChangeInventoryItemInPlace(Actor &, ItemStack &, ItemStack &, ItemAcquisitionMethod)const;
    Item(std::string const&, short);
    void getFood()const;
    void getSeed()const;
    void getCamera()const;
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    bool isMirroredArt()const;
    void setIsMirroredArt(bool);
    void updateCustomBlockEntityTag(BlockSource &, ItemStack &, BlockPos &)const;
    void useOn(ItemStack &, Actor &, int, int, int, unsigned char, float, float, float)const;
    bool canUseSeed(Actor &, BlockPos, unsigned char)const;
    void allowOffhand()const;
    void setAllowOffhand(bool);
    void getTextureUVCoordinateSet(std::string const&, int);
    void getIconTextureUVSet(TextureAtlasItem const&, int, int);
    void getTextureItem(std::string const&);
    void _textMatch(std::string const&, std::string const&, bool);
    void getRendererId()const;
    void getRequiredBaseGameVersion()const;
    void executeOnResetBAIcallbacks()const;
    void addOnResetBAIcallback(std::function<void ()(void)> const&);
    void setExperimental();
    bool isExplodable()const;
    void getUseAnimation()const;
    bool isFood()const;
    void getFrameCount()const;
};
