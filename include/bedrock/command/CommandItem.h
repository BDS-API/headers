#pragma once

#include "./CommandOutput.h"


class CommandItem {

public:

    CommandItem();
    CommandItem(int);
    CommandItem(unsigned long);
    void getId()const;
    void createInstance(int)const;
    void createInstance(int, int, CommandOutput *, bool)const;
};
