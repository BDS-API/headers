#pragma once

#include <string>
#include <memory>
#include <functional>
#include "../util/BlockPos.h"


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

    ~Item(); // _ZN4ItemD2Ev
    virtual void tearDown(); // _ZN4Item8tearDownEv
    virtual void getMaxUseDuration(ItemInstance const*)const; // _ZNK4Item17getMaxUseDurationEPK12ItemInstance
    virtual void getMaxUseDuration(ItemStack const*)const; // _ZNK4Item17getMaxUseDurationEPK9ItemStack
    virtual bool isExperimental(ItemDescriptor const*)const; // _ZNK4Item14isExperimentalEPK14ItemDescriptor
    virtual void setMaxStackSize(unsigned char); // _ZN4Item15setMaxStackSizeEh
//  virtual void setCategory(CreativeItemCategory); //TODO: incomplete function definition // _ZN4Item11setCategoryE20CreativeItemCategory
    virtual void setStackedByData(bool); // _ZN4Item16setStackedByDataEb
    virtual void setMaxDamage(int); // _ZN4Item12setMaxDamageEi
    virtual void setHandEquipped(); // _ZN4Item15setHandEquippedEv
//  virtual void setUseAnimation(UseAnimation); //TODO: incomplete function definition // _ZN4Item15setUseAnimationE12UseAnimation
    virtual void setMaxUseDuration(int); // _ZN4Item17setMaxUseDurationEi
    virtual void setRequiresWorldBuilder(bool); // _ZN4Item23setRequiresWorldBuilderEb
    virtual void setExplodable(bool); // _ZN4Item13setExplodableEb
    virtual void setIsGlint(bool); // _ZN4Item10setIsGlintEb
    virtual void setShouldDespawn(bool); // _ZN4Item16setShouldDespawnEb
    virtual void getBlockShape()const; // _ZNK4Item13getBlockShapeEv
    virtual bool canBeDepleted()const; // _ZNK4Item13canBeDepletedEv
    virtual bool canDestroySpecial(Block const&)const; // _ZNK4Item17canDestroySpecialERK5Block
    virtual void getLevelDataForAuxValue(int)const; // _ZNK4Item23getLevelDataForAuxValueEi
    virtual bool isStackedByData()const; // _ZNK4Item15isStackedByDataEv
    virtual void getMaxDamage()const; // _ZNK4Item12getMaxDamageEv
    virtual void getAttackDamage()const; // _ZNK4Item15getAttackDamageEv
    virtual bool isHandEquipped()const; // _ZNK4Item14isHandEquippedEv
    virtual bool isArmor()const; // _ZNK4Item7isArmorEv
    virtual bool isDye()const; // _ZNK4Item5isDyeEv
    virtual bool isFertilizer(int)const; // _ZNK4Item12isFertilizerEi
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK4Item7isGlintERK13ItemStackBase
    virtual bool isThrowable()const; // _ZNK4Item11isThrowableEv
    virtual bool isPattern()const; // _ZNK4Item9isPatternEv
    virtual bool showsDurabilityInCreative()const; // _ZNK4Item25showsDurabilityInCreativeEv
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag> const&)const; // _ZNK4Item26isWearableThroughLootTableERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    virtual bool canDestroyInCreative()const; // _ZNK4Item20canDestroyInCreativeEv
    virtual bool isDestructive(int)const; // _ZNK4Item13isDestructiveEi
    virtual bool isLiquidClipItem(int)const; // _ZNK4Item16isLiquidClipItemEi
    virtual bool requiresInteract()const; // _ZNK4Item16requiresInteractEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK4Item24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const; // _ZNK4Item17isValidRepairItemERK12ItemInstanceS2_
    virtual void getEnchantSlot()const; // _ZNK4Item14getEnchantSlotEv
    virtual void getEnchantValue()const; // _ZNK4Item15getEnchantValueEv
    virtual void getArmorValue()const; // _ZNK4Item13getArmorValueEv
    virtual bool isComplex()const; // _ZNK4Item9isComplexEv
    virtual bool isValidAuxValue(int)const; // _ZNK4Item15isValidAuxValueEi
    virtual void getDamageChance(int)const; // _ZNK4Item15getDamageChanceEi
    virtual void uniqueAuxValues()const; // _ZNK4Item15uniqueAuxValuesEv
    virtual bool isMultiColorTinted(ItemStack const&)const; // _ZNK4Item18isMultiColorTintedERK9ItemStack
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const; // _ZNK4Item8getColorERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EERK14ItemDescriptor
    virtual void getBaseColor(ItemStack const&)const; // _ZNK4Item12getBaseColorERK9ItemStack
    virtual void getSecondaryColor(ItemStack const&)const; // _ZNK4Item17getSecondaryColorERK9ItemStack
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const; // _ZNK4Item18saveAdditionalDataERK13ItemStackBaseR11CompoundTag
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const; // _ZNK4Item18readAdditionalDataER13ItemStackBaseRK11CompoundTag
    virtual bool isTintable()const; // _ZNK4Item10isTintableEv
    virtual void use(ItemStack &, Player &)const; // _ZNK4Item3useER9ItemStackR6Player
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK4Item8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void useTimeDepleted(ItemInstance &, Level *, Player *)const; // _ZNK4Item15useTimeDepletedER12ItemInstanceP5LevelP6Player
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK4Item15useTimeDepletedER9ItemStackP5LevelP6Player
    virtual void releaseUsing(ItemInstance &, Player *, int)const; // _ZNK4Item12releaseUsingER12ItemInstanceP6Playeri
    virtual void releaseUsing(ItemStack &, Player *, int)const; // _ZNK4Item12releaseUsingER9ItemStackP6Playeri
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const; // _ZNK4Item15getDestroySpeedERK12ItemInstanceRK5Block
    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *)const; // _ZNK4Item9hurtEnemyER12ItemInstanceP3MobS3_
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK4Item9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const; // _ZNK4Item9mineBlockER12ItemInstanceRK5BlockiiiP5Actor
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK4Item9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK4Item18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const; // _ZNK4Item26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase
    virtual std::string buildCategoryDescriptionName()const; // _ZNK4Item28buildCategoryDescriptionNameB5cxx11Ev
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const; // _ZNK4Item12readUserDataER13ItemStackBaseR10IDataInputR20ReadOnlyBinaryStream
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const; // _ZNK4Item13writeUserDataERK13ItemStackBaseR11IDataOutput
    virtual void getMaxStackSize(ItemDescriptor const&)const; // _ZNK4Item15getMaxStackSizeERK14ItemDescriptor
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const; // _ZNK4Item13inventoryTickER9ItemStackR5LevelR5Actorib
    virtual void refreshedInContainer(ItemStackBase &, Level &)const; // _ZNK4Item20refreshedInContainerER13ItemStackBaseR5Level
    virtual void getCooldownType()const; // _ZNK4Item15getCooldownTypeEv
    virtual void getCooldownTime()const; // _ZNK4Item15getCooldownTimeEv
    virtual void fixupOnLoad(ItemStackBase &)const; // _ZNK4Item11fixupOnLoadER13ItemStackBase
    virtual void fixupOnLoad(ItemStackBase &, Level &)const; // _ZNK4Item11fixupOnLoadER13ItemStackBaseR5Level
    virtual void getDamageValue(std::unique_ptr<CompoundTag> const&)const; // _ZNK4Item14getDamageValueERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    virtual void setDamageValue(ItemStackBase &, short)const; // _ZNK4Item14setDamageValueER13ItemStackBases
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const; // _ZNK4Item19getInHandUpdateTypeERK6PlayerRK12ItemInstanceS5_bb
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const; // _ZNK4Item19getInHandUpdateTypeERK6PlayerRK9ItemStackS5_bb
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const; // _ZNK4Item10isSameItemERK13ItemStackBaseS2_
    virtual std::string getInteractText(Player const&)const; // _ZNK4Item15getInteractTextB5cxx11ERK6Player
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK4Item20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual bool isEmissive(int)const; // _ZNK4Item10isEmissiveEi
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK4Item7getIconERK13ItemStackBaseib
    virtual void getIconYOffset()const; // _ZNK4Item14getIconYOffsetEv
    virtual void setIcon(std::string const&, int); // _ZN4Item7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void setIcon(TextureUVCoordinateSet const&); // _ZN4Item7setIconERK22TextureUVCoordinateSet
    virtual void setIconAtlas(std::string const&, int); // _ZN4Item12setIconAtlasERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual bool canBeCharged()const; // _ZNK4Item12canBeChargedEv
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const; // _ZNK4Item22playSoundIncrementallyERK12ItemInstanceR3Mob
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const; // _ZNK4Item22playSoundIncrementallyERK9ItemStackR3Mob
    virtual std::string getAuxValuesDescription()const; // _ZNK4Item23getAuxValuesDescriptionB5cxx11Ev
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const; // _ZNK4Item22_checkUseOnPermissionsER5ActorR12ItemInstanceRKhRK8BlockPos
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const; // _ZNK4Item22_checkUseOnPermissionsER5ActorR9ItemStackRKhRK8BlockPos
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const; // _ZNK4Item18_calculatePlacePosER12ItemInstanceR5ActorRhR8BlockPos
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK4Item18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK4Item6_useOnER12ItemInstanceR5Actor8BlockPoshfff
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK4Item6_useOnER9ItemStackR5Actor8BlockPoshfff
    void getId()const; // _ZNK4Item5getIdEv
    void getLegacyBlock()const; // _ZNK4Item14getLegacyBlockEv
    void getCreativeCategory()const; // _ZNK4Item19getCreativeCategoryEv
    void shouldDespawn()const; // _ZNK4Item13shouldDespawnEv
    void toBlockId(short); // _ZN4Item9toBlockIdEs
    std::string getDescriptionId()const; // _ZNK4Item16getDescriptionIdB5cxx11Ev
    std::string getRawNameId()const; // _ZNK4Item12getRawNameIdB5cxx11Ev
    void resetId(short); // _ZN4Item7resetIdEs
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>); // _ZN4Item19setAtlasItemManagerESt10shared_ptrI16AtlasItemManagerE
    void initServer(Json::Value &); // _ZN4Item10initServerERN4Json5ValueE
    void initClient(Json::Value &, Json::Value &); // _ZN4Item10initClientERN4Json5ValueES2_
    void alterAvailableCreativeItems(ActorInfoRegistry *, LevelData &); // _ZN4Item27alterAvailableCreativeItemsEP17ActorInfoRegistryR9LevelData
    void beginCreativeGroup(std::string const&, ItemInstance const&); // _ZN4Item18beginCreativeGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstance
    void beginCreativeGroup(std::string const&, short, short, CompoundTag const*); // _ZN4Item18beginCreativeGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEssPK11CompoundTag
    void beginCreativeGroup(std::string const&, Block const*, CompoundTag const*); // _ZN4Item18beginCreativeGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPK5BlockPK11CompoundTag
    void beginCreativeGroup(std::string const&, Item *, short, CompoundTag const*); // _ZN4Item18beginCreativeGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS_sPK11CompoundTag
    void endCreativeGroup(); // _ZN4Item16endCreativeGroupEv
    void addCreativeItem(short, short); // _ZN4Item15addCreativeItemEss
    void addCreativeItem(ItemInstance const&); // _ZN4Item15addCreativeItemERK12ItemInstance
    void addCreativeItem(Block const&); // _ZN4Item15addCreativeItemERK5Block
    void addCreativeItem(Item *, short); // _ZN4Item15addCreativeItemEPS_s
    void addCreativeItem(ItemStack const&); // _ZN4Item15addCreativeItemERK9ItemStack
    void findCreativeItem(ItemInstance const&); // _ZN4Item16findCreativeItemERK12ItemInstance
    void initCreativeItems(bool, ActorInfoRegistry *, BlockDefinitionGroup *, bool, BaseGameVersion const&, std::function<void (ActorInfoRegistry *, BlockDefinitionGroup *, bool)>); // _ZN4Item17initCreativeItemsEbP17ActorInfoRegistryP20BlockDefinitionGroupbRK15BaseGameVersionSt8functionIFvS1_S3_bEE
    void destroySpeedBonus(ItemInstance const&)const; // _ZNK4Item17destroySpeedBonusERK12ItemInstance
//  void _helpChangeInventoryItemInPlace(Actor &, ItemStack &, ItemStack &, ItemAcquisitionMethod)const; //TODO: incomplete function definition // _ZNK4Item31_helpChangeInventoryItemInPlaceER5ActorR9ItemStackS3_21ItemAcquisitionMethod
    Item(std::string const&, short); // _ZN4ItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    std::string getNamespace()const; // _ZNK4Item12getNamespaceB5cxx11Ev
    void getFood()const; // _ZNK4Item7getFoodEv
    void getSeed()const; // _ZNK4Item7getSeedEv
    void getCamera()const; // _ZNK4Item9getCameraEv
    void setMinRequiredBaseGameVersion(BaseGameVersion const&); // _ZN4Item29setMinRequiredBaseGameVersionERK15BaseGameVersion
    bool isMirroredArt()const; // _ZNK4Item13isMirroredArtEv
    void setIsMirroredArt(bool); // _ZN4Item16setIsMirroredArtEb
    void updateCustomBlockEntityTag(BlockSource &, ItemStack &, BlockPos &)const; // _ZNK4Item26updateCustomBlockEntityTagER11BlockSourceR9ItemStackR8BlockPos
    void useOn(ItemStack &, Actor &, int, int, int, unsigned char, float, float, float)const; // _ZNK4Item5useOnER9ItemStackR5Actoriiihfff
    bool canUseSeed(Actor &, BlockPos, unsigned char)const; // _ZNK4Item10canUseSeedER5Actor8BlockPosh
    void allowOffhand()const; // _ZNK4Item12allowOffhandEv
    void setAllowOffhand(bool); // _ZN4Item15setAllowOffhandEb
    std::string buildDescriptionName(ItemStackBase const&)const; // _ZNK4Item20buildDescriptionNameB5cxx11ERK13ItemStackBase
    void getTextureUVCoordinateSet(std::string const&, int); // _ZN4Item25getTextureUVCoordinateSetERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getIconTextureUVSet(TextureAtlasItem const&, int, int); // _ZN4Item19getIconTextureUVSetERK16TextureAtlasItemii
    void getTextureItem(std::string const&); // _ZN4Item14getTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _textMatch(std::string const&, std::string const&, bool); // _ZN4Item10_textMatchERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    std::string getFullItemName()const; // _ZNK4Item15getFullItemNameB5cxx11Ev
    std::string getCommandName()const; // _ZNK4Item14getCommandNameB5cxx11Ev
    void getRendererId()const; // _ZNK4Item13getRendererIdEv
    std::string getSerializedName()const; // _ZNK4Item17getSerializedNameB5cxx11Ev
    void getRequiredBaseGameVersion()const; // _ZNK4Item26getRequiredBaseGameVersionEv
    void executeOnResetBAIcallbacks()const; // _ZNK4Item26executeOnResetBAIcallbacksEv
    void addOnResetBAIcallback(std::function<void (void)> const&); // _ZN4Item21addOnResetBAIcallbackERKSt8functionIFvvEE
    void setExperimental(); // _ZN4Item15setExperimentalEv
    bool isExplodable()const; // _ZNK4Item12isExplodableEv
    void getUseAnimation()const; // _ZNK4Item15getUseAnimationEv
    bool isFood()const; // _ZNK4Item6isFoodEv
    void getFrameCount()const; // _ZNK4Item13getFrameCountEv
    class Tier {

    public:
        void getUses()const; // _ZNK4Item4Tier7getUsesEv
        void getAttackDamageBonus()const; // _ZNK4Item4Tier20getAttackDamageBonusEv
        void getEnchantmentValue()const; // _ZNK4Item4Tier19getEnchantmentValueEv
        void getLevel()const; // _ZNK4Item4Tier8getLevelEv
        Tier(int, int, float, int, int); // _ZN4Item4TierC2Eiifii
        void getSpeed()const; // _ZNK4Item4Tier8getSpeedEv
    };
};
