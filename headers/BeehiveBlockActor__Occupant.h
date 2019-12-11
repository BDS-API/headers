#pragma once

class BeehiveBlockActor::Occupant {

public:

    void Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    void Occupant(BeehiveBlockActor::Occupant&&);
};
