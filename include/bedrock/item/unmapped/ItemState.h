#pragma once

#include <functional>
#include <string>


class ItemState {

public:
    class StateListNode;

    ~ItemState();
    ItemState(unsigned long, std::string const&, unsigned long);
    std::string getName()const;
    void getVariationCount()const;
    void getID()const;
    void forEachState(std::function<bool (ItemState const&)>);
    class StateListNode {

    public:
        StateListNode(ItemState *);
        ~StateListNode();
    };
};
