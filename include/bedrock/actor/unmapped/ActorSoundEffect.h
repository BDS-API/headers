#pragma once

#include "../../../json/Value"


class ActorSoundEffect {

public:

    void toJson(Json::Value &)const;
    ActorSoundEffect(void);
    ActorSoundEffect(ActorSoundEffect const&);
    ActorSoundEffect(ActorSoundEffect&&);
};
