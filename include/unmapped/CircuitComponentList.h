#pragma once

#include <memory>
#include "./CircuitComponentList.h"
#include <vector>
#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/item/Item.h"


class CircuitComponentList {

public:

    CircuitComponentList();
    ~CircuitComponentList();
    void add(BaseCircuitComponent *, int, BlockPos);
    void begin();
    void end();
    void removeSource(BlockPos const&, BaseCircuitComponent const*);
//  void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item, std::allocator<CircuitComponentList::Item>>>); //TODO: incomplete function definition
    CircuitComponentList(CircuitComponentList const&);
    CircuitComponentList(CircuitComponentList &&);
    void push_back(CircuitComponentList::Item const&);
    void size()const;
};
