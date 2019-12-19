#pragma once

class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual ~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);

    void ItemStack(void);
    void ItemStack(BlockLegacy const&, int);
    void ItemStack(Block const&, int, CompoundTag const*);
    void ItemStack(Item const&);
    void ItemStack(Item const&, int);
    void ItemStack(Item const&, int, int);
    void ItemStack(Item const&, int, int, CompoundTag const*);
    void ItemStack(ItemInstance const&);
    void ItemStack(RecipeIngredient const&);
    void ItemStack(ItemStack const&);
    void getStrippedNetworkItem(void)const;
    void useOn(Actor &, int, int, int, unsigned char, float, float, float);
    void getDestroySpeed(Block const&)const;
    void use(Player &);
    void inventoryTick(Level &, Actor &, int, bool);
    void useAsFuel(void);
    void removeEnchants(void);
    void mineBlock(Block const&, int, int, int, Mob *);
    void sameItemAndAuxAndBlockData(ItemStack const&)const;
    void clone(void)const;
    void fromTag(CompoundTag const&);
    void fromTag(CompoundTag const&, Level &);
    void releaseUsing(Player *, int);
    void getMaxUseDuration(void)const;
    void useTimeDepleted(Level *, Player *);
    void playSoundIncrementally(Mob &)const;
};
