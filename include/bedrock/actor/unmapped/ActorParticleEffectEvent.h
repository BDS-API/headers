#pragma once



class ActorParticleEffectEvent {

public:
    ~ActorParticleEffectEvent();
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    void operator<(ActorParticleEffectEvent const&)const;
    ActorParticleEffectEvent(ActorParticleEffectEvent &&);
    ActorParticleEffectEvent(float);
};
