#pragma once



class ActorSoundEffect {

public:
    void toJson(Json::Value &)const;
    ActorSoundEffect(ActorSoundEffect &&);
    ActorSoundEffect(ActorSoundEffect const&);
    ActorSoundEffect();
    ~ActorSoundEffect();
};
