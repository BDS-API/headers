#pragma once

#include <string>


class ActorAnimationEvent {

public:
    void toJson(Json::Value &)const;
    void operator<(ActorAnimationEvent const&)const;
    ActorAnimationEvent(ActorAnimationEvent &&);
    void fire(RenderParams &, Actor &)const;
    ActorAnimationEvent(ActorAnimationEvent const&);
    ~ActorAnimationEvent();
//  ActorAnimationEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
};
