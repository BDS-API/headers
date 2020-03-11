#pragma once

#include <string>
#include "../../../unmapped/RenderParams.h"
#include "../../../json/Value.h"
#include "./ActorAnimationControllerStateTransition.h"


class ActorAnimationControllerStateTransition {

public:

    ActorAnimationControllerStateTransition(std::string const&, std::string const&);
    void shouldTransition(RenderParams &)const;
    void toJson(Json::Value &)const;
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
    ~ActorAnimationControllerStateTransition();
};
