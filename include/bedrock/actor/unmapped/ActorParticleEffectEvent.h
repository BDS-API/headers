#pragma once



class ActorParticleEffectEvent {

public:
    void operator<(ActorParticleEffectEvent const&)const; // _ZNK24ActorParticleEffectEventltERKS_
    ActorParticleEffectEvent(float); // _ZN24ActorParticleEffectEventC2Ef
    ~ActorParticleEffectEvent(); // _ZN24ActorParticleEffectEventD2Ev
    ActorParticleEffectEvent(ActorParticleEffectEvent const&); // _ZN24ActorParticleEffectEventC2ERKS_
    ActorParticleEffectEvent(ActorParticleEffectEvent &&); // _ZN24ActorParticleEffectEventC2EOS_
};
