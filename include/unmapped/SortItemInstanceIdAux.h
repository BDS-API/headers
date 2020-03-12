#pragma once

#include "../bedrock/item/ItemInstance.h"


namespace SortItemInstanceIdAux {

    void operator()(ItemInstance const&, ItemInstance const&)const;
};
