#pragma once



class ActorParticleEffectEvent {

public:
    ActorParticleEffectEvent(ActorParticleEffectEvent const&);
    void operator<(ActorParticleEffectEvent const&)const;
    ~ActorParticleEffectEvent();
    ActorParticleEffectEvent(float);
    ActorParticleEffectEvent(ActorParticleEffectEvent &&);
};
