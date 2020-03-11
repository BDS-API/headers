#pragma once

#include "./ActorSoundEffectEvent.h"


class ActorSoundEffectEvent {

public:

    ActorSoundEffectEvent(float);
    void operator<(ActorSoundEffectEvent const&)const;
    ~ActorSoundEffectEvent();
    ActorSoundEffectEvent(ActorSoundEffectEvent const&);
    ActorSoundEffectEvent(ActorSoundEffectEvent &&);
};
