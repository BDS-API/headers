#pragma once



class CommandItem {

public:

    CommandItem(void);
    CommandItem(int);
    CommandItem(unsigned long);
    void getId()const;
    void createInstance(int)const;
    void createInstance(int, int, CommandOutput *, bool)const;
};
