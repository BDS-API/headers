#pragma once

#include "./ActorSoundEffect.h"
#include "../../../json/Value.h"


class ActorSoundEffect {

public:

    void toJson(Json::Value &)const;
    ActorSoundEffect();
    ~ActorSoundEffect();
    ActorSoundEffect(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect &&);
};
