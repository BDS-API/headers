#pragma once



class ItemStateInstance {

public:
    bool isValidData(unsigned int)const;
    void getState()const;
    void initState(unsigned int &, unsigned int, unsigned int, ItemState const&);
    ItemStateInstance();
    bool isInitialized()const;
    void getMask()const;
};
