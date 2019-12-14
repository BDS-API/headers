#pragma once

class ItemState {

public:

    virtual ~ItemState();

    void getID(void)const;
    void getVariationCount(void)const;
    void forEachState(std::function<bool ()(ItemState const&)>);
    void ItemState(unsigned long, std::string const&, unsigned long);
};
