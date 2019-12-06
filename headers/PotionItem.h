#pragma once

class PotionItem : Item {

public:
    virtual ~PotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void uniqueAuxValues(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void getPotionType(void)const;

    void PotionItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    void getEffectId(ItemDescriptor const&)const;
};
