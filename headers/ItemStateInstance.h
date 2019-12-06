#pragma once

class ItemStateInstance {

public:

    void getMask(void)const;
    void getState(void)const;
    void ItemStateInstance(void);
    void initState(unsigned int &, unsigned int, unsigned int, ItemState const&);
    bool isInitialized(void)const;
    bool isValidData(unsigned int)const;
};
