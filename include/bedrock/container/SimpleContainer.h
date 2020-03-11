#pragma once

#include "../item/ItemStack.h"
#include "../actor/Player.h"
#include "./Container.h"
#include <string>


class SimpleContainer : Container {

public:
    virtual ~SimpleContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

//  SimpleContainer(std::string const&, bool, int, ContainerType); //TODO: incomplete function definition
    void clearContent();
};
