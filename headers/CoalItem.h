#pragma once

class CoalItem : Item {

public:
    virtual ~CoalItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void CoalItem(std::string const&, int);
    bool isCharcoal(ItemInstance const&);
};
