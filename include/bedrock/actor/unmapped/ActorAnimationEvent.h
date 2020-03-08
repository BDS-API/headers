#pragma once

#include "../../../unmapped/RenderParams"
#include "../Actor"
#include "../../../json/Value"


class ActorAnimationEvent {

public:

    void fire(RenderParams &, Actor &)const;
    ActorAnimationEvent(float, std::string const&, CurrentCmdVersion);
    void toJson(Json::Value &)const;
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent&&);
};
