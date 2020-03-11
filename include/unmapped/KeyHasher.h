#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor.h"


namespace ItemPack {

class KeyHasher {

public:

    void operator()(ItemDescriptor const&)const;
};

}