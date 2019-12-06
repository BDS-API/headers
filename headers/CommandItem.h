#pragma once

class CommandItem {

public:

    void CommandItem(void);
    void CommandItem(int);
    void CommandItem(unsigned long);
    void getId(void)const;
    void createInstance(int)const;
    void createInstance(int, int, CommandOutput *, bool)const;
};
