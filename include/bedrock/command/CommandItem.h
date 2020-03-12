#pragma once

#include "CommandOutput.h"


class CommandItem {

public:
    CommandItem();
    CommandItem(unsigned long);
    void getId()const;
    void createInstance(int, int, CommandOutput *, bool)const;
    CommandItem(int);
    void createInstance(int)const;
};
