#pragma once

class EmptyMapItem : ComplexItem {

public:
    virtual ~EmptyMapItem();
    virtual void requiresInteract(void)const;
    virtual void use(ItemStack &, Player &)const;

    void EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemStack &);
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
};
