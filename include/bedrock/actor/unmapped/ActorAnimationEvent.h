#pragma once

#include "../Actor.h"
#include "../../../unmapped/RenderParams.h"
#include "./ActorAnimationEvent.h"
#include "../../../json/Value.h"
#include <string>


class ActorAnimationEvent {

public:

    void fire(RenderParams &, Actor &)const;
    void operator<(ActorAnimationEvent const&)const;
//  ActorAnimationEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void toJson(Json::Value &)const;
    ~ActorAnimationEvent();
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent &&);
};
