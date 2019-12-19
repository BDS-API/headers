#pragma once

class ActorAnimationEvent {

public:

    void fire(RenderParams &, Actor &)const;
    ActorAnimationEvent(float, std::string const&, CurrentCmdVersion);
    void toJson(Json::Value &)const;
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent&&);
};
