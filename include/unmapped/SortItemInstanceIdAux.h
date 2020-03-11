#pragma once

#include "../bedrock/item/ItemInstance.h"


class SortItemInstanceIdAux {

public:

    void operator()(ItemInstance const&, ItemInstance const&)const;
};
