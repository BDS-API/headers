#pragma once

#include "../../../unmapped/RenderParams"
#include "../../../json/Value"


class ActorAnimationControllerStateTransition {

public:

    ActorAnimationControllerStateTransition(std::string const&, std::string const&);
    void shouldTransition(RenderParams &)const;
    void toJson(Json::Value &)const;
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
};
