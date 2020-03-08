#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/level/circuit/component/BaseCircuitComponent"


class CircuitComponentList {

public:

    CircuitComponentList(void);
    void add(BaseCircuitComponent *, int, BlockPos);
    void begin();
    void end();
    void removeSource(BlockPos const&, BaseCircuitComponent const*);
    void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item, std::allocator<CircuitComponentList::Item>>>);
    CircuitComponentList(CircuitComponentList const&);
    CircuitComponentList(CircuitComponentList&&);
    void push_back(CircuitComponentList::Item const&);
    void size()const;
};
