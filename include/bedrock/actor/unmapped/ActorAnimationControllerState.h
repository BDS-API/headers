#pragma once

#include "ActorAnimationController.h"
#include <string>
#include "../../../unmapped/RenderParams.h"
#include "../../../unmapped/HashedString.h"
#include "../../../json/Value.h"
#include "../../../unmapped/ExpressionNode.h"


class ActorAnimationControllerState {

public:
    ~ActorAnimationControllerState();
    void addAnimation(HashedString const&, ExpressionNode const&);
    void addBlendTransitionKeyFrame(float, float);
//  void addEntryActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void toJson(Json::Value &, ActorAnimationController const&)const;
    void addVariable(std::string const&);
    void getNextState(RenderParams &)const;
//  void addExitActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    ActorAnimationControllerState(HashedString const&);
    void setBlendTransitionTime(float);
    void addSoundEffect();
    void setVariables(RenderParams &)const;
    void removeVariables(RenderParams &)const;
    void addTransition(std::string const&, std::string const&, bool);
    void addAnimation(HashedString const&);
    void addParticleEffect();
};
