#pragma once

class CircuitComponentList {

public:

    void CircuitComponentList(void);
    void add(BaseCircuitComponent *, int, BlockPos);
    void begin(void);
    void end(void);
    void removeSource(BlockPos const&, BaseCircuitComponent const*);
    void erase(__gnu_cxx::__normal_iterator<CircuitComponentList::Item *, std::vector<CircuitComponentList::Item, std::allocator<CircuitComponentList::Item>>>);
    void CircuitComponentList(CircuitComponentList const&);
    void CircuitComponentList(CircuitComponentList&&);
    void push_back(CircuitComponentList::Item const&);
    void size(void)const;
};
