#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../block/unmapped/BlockDefinitionGroup.h"


class VanillaWorldSystems {

public:

    void init(ResourcePackManager *, BlockDefinitionGroup *);
    void shutdown();
};
