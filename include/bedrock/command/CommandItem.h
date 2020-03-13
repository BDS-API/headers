#pragma once



class CommandItem {

public:
    CommandItem(); // _ZN11CommandItemC2Ev
    CommandItem(int); // _ZN11CommandItemC2Ei
    CommandItem(unsigned long); // _ZN11CommandItemC2Em
    void getId()const; // _ZNK11CommandItem5getIdEv
    void createInstance(int)const; // _ZNK11CommandItem14createInstanceEi
    void createInstance(int, int, CommandOutput *, bool)const; // _ZNK11CommandItem14createInstanceEiiP13CommandOutputb
};
