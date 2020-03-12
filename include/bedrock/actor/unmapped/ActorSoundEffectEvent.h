#pragma once



class ActorSoundEffectEvent {

public:
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ~ActorSoundEffectEvent();
    void operator<(ActorSoundEffectEvent const&)const;
    ActorSoundEffectEvent(float);
    ActorSoundEffectEvent(ActorSoundEffectEvent &&);
};
