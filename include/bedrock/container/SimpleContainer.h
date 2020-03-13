#pragma once

#include <string>
#include "Container.h"


class SimpleContainer : Container {

public:
    ~SimpleContainer(); // _ZN15SimpleContainerD2Ev
    virtual void getItem(int)const; // _ZNK15SimpleContainer7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN15SimpleContainer7setItemEiRK9ItemStack
    virtual void getContainerSize()const; // _ZNK15SimpleContainer16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK15SimpleContainer15getMaxStackSizeEv
    virtual void startOpen(Player &); // _ZN15SimpleContainer9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN15SimpleContainer8stopOpenER6Player
//  SimpleContainer(std::string const&, bool, int, ContainerType); //TODO: incomplete function definition // _ZN15SimpleContainerC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbi13ContainerType
    void clearContent(); // _ZN15SimpleContainer12clearContentEv
};
