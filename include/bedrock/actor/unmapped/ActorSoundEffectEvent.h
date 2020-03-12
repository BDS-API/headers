#pragma once



class ActorSoundEffectEvent {

public:
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(float);
    void operator<(ActorSoundEffectEvent const&)const;
    ActorSoundEffectEvent(ActorSoundEffectEvent &&);
    ~ActorSoundEffectEvent();
};
