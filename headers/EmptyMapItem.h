#pragma once

class EmptyMapItem : ComplexItem {

public:
    virtual ~EmptyMapItem();
    virtual void requiresInteract(void)const;
    virtual void use(ItemStack &, Player &)const;

    void EmptyMapItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, short);
    void addPlayerMarker(ItemStack &);
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
};
