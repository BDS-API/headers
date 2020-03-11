#pragma once

#include "../bedrock/item/unmapped/ItemState.h"


namespace ItemState {

class StateListNode {

public:

    StateListNode(ItemState *);
    ~StateListNode();
};

}