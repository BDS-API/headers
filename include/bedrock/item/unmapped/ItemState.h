#pragma once

#include <string>
#include <functional>


class ItemState {

public:
    class StateListNode;

    ~ItemState(); // _ZN9ItemStateD2Ev
    void getID()const; // _ZNK9ItemState5getIDEv
    void getVariationCount()const; // _ZNK9ItemState17getVariationCountEv
    std::string getName()const; // _ZNK9ItemState7getNameB5cxx11Ev
    void forEachState(std::function<bool (ItemState const&)>); // _ZN9ItemState12forEachStateESt8functionIFbRKS_EE
    ItemState(unsigned long, std::string const&, unsigned long); // _ZN9ItemStateC2EmRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    class StateListNode {

    public:
        StateListNode(ItemState *); // _ZN9ItemState13StateListNodeC2EPS_
        ~StateListNode(); // _ZN9ItemState13StateListNodeD2Ev
    };
};
