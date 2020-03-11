#pragma once

#include "./ActorParticleEffectEvent.h"


class ActorParticleEffectEvent {

public:

    void operator<(ActorParticleEffectEvent const&)const;
    ActorParticleEffectEvent(float);
    ~ActorParticleEffectEvent();
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    ActorParticleEffectEvent(ActorParticleEffectEvent &&);
};
