#pragma once

class CircuitComponentList::Item {

public:

    void Item(BaseCircuitComponent *, int, BlockPos);
    void Item(CircuitComponentList::Item&&);
    void Item(CircuitComponentList::Item const&);
    void Item(void);
};
