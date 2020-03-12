#pragma once



class CommandItem {

public:
    void getId()const;
    CommandItem(int);
    void createInstance(int, int, CommandOutput *, bool)const;
    CommandItem(unsigned long);
    void createInstance(int)const;
    CommandItem();
};
