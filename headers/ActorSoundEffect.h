#pragma once

class ActorSoundEffect {

public:

    void toJson(Json::Value &)const;
    void ActorSoundEffect(void);
    void ActorSoundEffect(ActorSoundEffect const&);
    void ActorSoundEffect(ActorSoundEffect&&);
};
