#pragma once

class SplashPotionItem : PotionItem {

public:
    virtual ~SplashPotionItem();
    virtual bool isThrowable(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void getPotionType(void)const;

    void SplashPotionItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
