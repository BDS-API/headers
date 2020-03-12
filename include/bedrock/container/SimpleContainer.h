#pragma once

#include "../item/ItemStack.h"
#include "../actor/Player.h"
#include <string>
#include "Container.h"


class SimpleContainer : Container {

public:
    virtual void setItem(int, ItemStack const&);
    virtual void getItem(int)const;
    virtual void stopOpen(Player &);
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void getMaxStackSize()const;
    ~SimpleContainer();
    void clearContent();
//  SimpleContainer(std::string const&, bool, int, ContainerType); //TODO: incomplete function definition
};
