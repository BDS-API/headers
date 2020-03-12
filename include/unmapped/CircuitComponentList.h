#pragma once

#include "../bedrock/util/BlockPos.h"


class CircuitComponentList {

public:
    class Item;

    void removeSource(BlockPos const&, BaseCircuitComponent const*);
    CircuitComponentList(CircuitComponentList &&);
    CircuitComponentList();
    void push_back(CircuitComponentList::Item const&);
    void size()const;
    CircuitComponentList(CircuitComponentList const&);
//  void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item>>); //TODO: incomplete function definition
    void add(BaseCircuitComponent *, int, BlockPos);
    void end();
    void begin();
    ~CircuitComponentList();
    class Item {

    public:
        Item();
        Item(BaseCircuitComponent *, int, BlockPos);
        Item(CircuitComponentList::Item &&);
        Item(CircuitComponentList::Item const&);
    };
};
