#pragma once

class ActorAnimationControllerStateTransition {

public:

    void ActorAnimationControllerStateTransition(std::string const&, std::string const&);
    void shouldTransition(RenderParams &)const;
    void toJson(Json::Value &)const;
    void ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
};
