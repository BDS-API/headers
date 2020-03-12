#pragma once

#include <string>
#include <functional>


class ItemState {

public:
    class StateListNode;

    ~ItemState();
    std::string getName()const;
    void getID()const;
    void getVariationCount()const;
    ItemState(unsigned long, std::string const&, unsigned long);
    void forEachState(std::function<bool (ItemState const&)>);
    class StateListNode {

    public:
        StateListNode(ItemState *);
        ~StateListNode();
    };
};
