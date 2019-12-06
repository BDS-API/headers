#pragma once

class DiggerItem : Item {

public:
    virtual ~DiggerItem();
    virtual void getAttackDamage(void)const;
    virtual bool isHandEquipped(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantValue(void)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;

    bool hasBlock(Block const&)const;
    void setBlocks(std::vector<Block const*, std::allocator<Block const*>> const&);
    void DiggerItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, Item::Tier const&, std::vector<Block const*, std::allocator<Block const*>> const&);
};
