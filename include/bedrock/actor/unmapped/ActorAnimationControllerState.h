#pragma once

#include "../../../unmapped/RenderParams"
#include "../../../unmapped/ExpressionNode"
#include "../../../unmapped/HashedString"
#include "../../../json/Value"


class ActorAnimationControllerState {

public:

    void addVariable(std::string const&);
    void setVariables(RenderParams &)const;
    void removeVariables(RenderParams &)const;
    void addBlendTransitionKeyFrame(float, float);
    void setBlendTransitionTime(float);
    ActorAnimationControllerState(HashedString const&);
    void addAnimation(HashedString const&);
    void addAnimation(HashedString const&, ExpressionNode const&);
    void addTransition(std::string const&, std::string const&, bool);
    void getNextState(RenderParams &)const;
    void addParticleEffect();
    void addSoundEffect();
    void addEntryActorEvent(float, std::string const&, CurrentCmdVersion);
    void addExitActorEvent(float, std::string const&, CurrentCmdVersion);
    void toJson(Json::Value &, ActorAnimationController const&)const;
};
