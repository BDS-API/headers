#pragma once

#include "../../../json/Value.h"
#include "../Actor.h"
#include <string>
#include "../../../unmapped/RenderParams.h"


class ActorAnimationEvent {

public:
    void fire(RenderParams &, Actor &)const;
    ~ActorAnimationEvent();
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent &&);
    void operator<(ActorAnimationEvent const&)const;
//  ActorAnimationEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void toJson(Json::Value &)const;
};
