#pragma once

#include "./SpawnActorEntry.h"


class SpawnActorEntry {

public:

    ~SpawnActorEntry();
    SpawnActorEntry(SpawnActorEntry &&);
    SpawnActorEntry(SpawnActorEntry const&);
};
