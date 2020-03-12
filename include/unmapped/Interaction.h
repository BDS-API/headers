#pragma once

#include <string>


class Interaction {

public:
    Interaction();
    void setCooldown(float const&);
    void setTransformItem(std::string const&);
    void addActorDefinitionIdentifierByName(std::string const&);
    Interaction(Interaction const&);
    void addLevelSoundEventByName(std::string const&);
    ~Interaction();
    void setParticleType(std::string const&);
};
