#pragma once

#include "./ModelItem.h"


namespace BlockGraphics {

class ModelItem {

public:

    ModelItem();
    ~ModelItem();
    ModelItem(BlockGraphics::ModelItem const&);
    ModelItem(BlockGraphics::ModelItem &&);
};

}