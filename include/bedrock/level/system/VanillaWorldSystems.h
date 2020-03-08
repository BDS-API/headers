#pragma once

#include "../../pack/ResourcePackManager"
#include "../../block/unmapped/BlockDefinitionGroup"


class VanillaWorldSystems {

public:

    void init(ResourcePackManager *, BlockDefinitionGroup *);
    void shutdown();
};
