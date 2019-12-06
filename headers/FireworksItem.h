#pragma once

class FireworksItem : Item {

public:
    virtual ~FireworksItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void FireworksItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, int);
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack, std::allocator<ItemStack>> const&, int);
};
