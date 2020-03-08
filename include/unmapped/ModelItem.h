#pragma once

#include "../bedrock/block/unmapped/ModelItem"


using namespace BlockGraphics;

class ModelItem {

public:

    ModelItem(void);
    ModelItem(BlockGraphics::ModelItem const&);
    ModelItem(BlockGraphics::ModelItem&&);
};
