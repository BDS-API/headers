#pragma once

#include "../../block/unmapped/BlockDefinitionGroup"
#include "../../pack/ResourcePackManager"


class VanillaWorldSystems {

public:

    void init(ResourcePackManager *, BlockDefinitionGroup *);
    void shutdown();
};
