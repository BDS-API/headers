#pragma once

#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "./Occupant.h"
#include "../bedrock/nbt/CompoundTag.h"


namespace BeehiveBlockActor {

class Occupant {

public:

    Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    ~Occupant();
    Occupant(BeehiveBlockActor::Occupant &&);
};

}