#pragma once

#include "../../../json/Value.h"


class ActorSoundEffect {

public:
    ActorSoundEffect();
    void toJson(Json::Value &)const;
    ~ActorSoundEffect();
    ActorSoundEffect(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect &&);
};
