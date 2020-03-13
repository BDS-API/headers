#pragma once



class ActorSoundEffectEvent {

public:
    ActorSoundEffectEvent(float); // _ZN21ActorSoundEffectEventC2Ef
    void operator<(ActorSoundEffectEvent const&)const; // _ZNK21ActorSoundEffectEventltERKS_
    ~ActorSoundEffectEvent(); // _ZN21ActorSoundEffectEventD2Ev
    ActorSoundEffectEvent(ActorSoundEffectEvent const&); // _ZN21ActorSoundEffectEventC2ERKS_
    ActorSoundEffectEvent(ActorSoundEffectEvent &&); // _ZN21ActorSoundEffectEventC2EOS_
};
