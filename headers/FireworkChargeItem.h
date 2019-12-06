#pragma once

class FireworkChargeItem : Item {

public:
    virtual ~FireworkChargeItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable(void)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;

    void FireworkChargeItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getFormattedHoverText(CompoundTag const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void appendColors(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::vector<unsigned char, std::allocator<unsigned char>>);
    void setColor(ItemInstance &)const;
    void setColor(ItemStack &)const;
    void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool);
    void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool);
};
