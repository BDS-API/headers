#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../block/unmapped/BlockDefinitionGroup.h"


namespace VanillaWorldSystems {

    void init(ResourcePackManager *, BlockDefinitionGroup *);
    void shutdown();
};
