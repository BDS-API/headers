#pragma once

class ShieldItem : Item {

public:
    static long ShieldItem::EFFECTIVE_BLOCK_DELAY;
    static long ShieldItem::IN_HAND_BLOCK_DURATION;

    virtual ~ShieldItem();
    virtual bool isHandEquipped(void)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;

    void ShieldItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void playBlockSound(Player *)const;
    void playBreakSound(Player *)const;
};
