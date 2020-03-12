#pragma once

#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include <vector>
#include "../bedrock/util/BlockPos.h"


class CircuitComponentList {

public:
    class Item;

    void add(BaseCircuitComponent *, int, BlockPos);
    CircuitComponentList(CircuitComponentList &&);
    void begin();
    void push_back(CircuitComponentList::Item const&);
    ~CircuitComponentList();
    CircuitComponentList(CircuitComponentList const&);
//  void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item>>); //TODO: incomplete function definition
    void size()const;
    void end();
    CircuitComponentList();
    void removeSource(BlockPos const&, BaseCircuitComponent const*);
    class Item {

    public:
        Item(CircuitComponentList::Item const&);
        Item();
        Item(BaseCircuitComponent *, int, BlockPos);
        Item(CircuitComponentList::Item &&);
    };
};
