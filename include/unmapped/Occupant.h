#pragma once

using namespace BeehiveBlockActor;

class Occupant {

public:

    Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    Occupant(BeehiveBlockActor::Occupant&&);
};
