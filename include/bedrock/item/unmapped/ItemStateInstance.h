#pragma once



class ItemStateInstance {

public:
    void getMask()const; // _ZNK17ItemStateInstance7getMaskEv
    void getState()const; // _ZNK17ItemStateInstance8getStateEv
    ItemStateInstance(); // _ZN17ItemStateInstanceC2Ev
    void initState(unsigned int &, unsigned int, unsigned int, ItemState const&); // _ZN17ItemStateInstance9initStateERjjjRK9ItemState
    bool isInitialized()const; // _ZNK17ItemStateInstance13isInitializedEv
    bool isValidData(unsigned int)const; // _ZNK17ItemStateInstance11isValidDataEj
};
