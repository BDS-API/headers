#pragma once

class ActorAnimationEvent {

public:

    void fire(RenderParams &, Actor &)const;
    void ActorAnimationEvent(float, std::string const&, CurrentCmdVersion);
    void toJson(Json::Value &)const;
    void ActorAnimationEvent(ActorAnimationEvent const&);
    void ActorAnimationEvent(ActorAnimationEvent&&);
};
