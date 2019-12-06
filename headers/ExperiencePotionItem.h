#pragma once

class ExperiencePotionItem : Item {

public:
    virtual ~ExperiencePotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    void ExperiencePotionItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
