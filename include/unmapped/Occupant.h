#pragma once

#include "../bedrock/nbt/CompoundTag"


using namespace BeehiveBlockActor;

class Occupant {

public:

    Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    Occupant(BeehiveBlockActor::Occupant&&);
};
