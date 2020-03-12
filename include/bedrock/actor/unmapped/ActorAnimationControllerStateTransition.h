#pragma once

#include "../../../json/Value.h"
#include <string>
#include "../../../unmapped/RenderParams.h"


class ActorAnimationControllerStateTransition {

public:
    ~ActorAnimationControllerStateTransition();
    void toJson(Json::Value &)const;
    ActorAnimationControllerStateTransition(std::string const&, std::string const&);
    void shouldTransition(RenderParams &)const;
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
};
