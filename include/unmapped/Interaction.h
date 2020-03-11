#pragma once

#include "./Interaction.h"
#include <string>


class Interaction {

public:

    ~Interaction();
    void setCooldown(float const&);
    void setTransformItem(std::string const&);
    void setParticleType(std::string const&);
    void addLevelSoundEventByName(std::string const&);
    void addActorDefinitionIdentifierByName(std::string const&);
    Interaction();
    Interaction(Interaction const&);
};
