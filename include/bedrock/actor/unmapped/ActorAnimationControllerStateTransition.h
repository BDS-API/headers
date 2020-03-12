#pragma once

#include <string>


class ActorAnimationControllerStateTransition {

public:
    ~ActorAnimationControllerStateTransition();
    void toJson(Json::Value &)const;
    ActorAnimationControllerStateTransition(std::string const&, std::string const&);
    void shouldTransition(RenderParams &)const;
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
};
