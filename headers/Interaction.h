#pragma once

class Interaction {

public:

    void setCooldown(float const&);
    void setTransformItem(std::string const&);
    void setParticleType(std::string const&);
    void addLevelSoundEventByName(std::string const&);
    void addActorDefinitionIdentifierByName(std::string const&);
    void Interaction(void);
    void Interaction(Interaction const&);
};
