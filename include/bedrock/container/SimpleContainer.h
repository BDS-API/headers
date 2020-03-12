#pragma once

#include "Container.h"
#include <string>


class SimpleContainer : Container {

public:
    ~SimpleContainer();
    virtual void getItem(int)const;
    virtual void getMaxStackSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual void stopOpen(Player &);
    virtual void startOpen(Player &);
//  SimpleContainer(std::string const&, bool, int, ContainerType); //TODO: incomplete function definition
    void clearContent();
};
