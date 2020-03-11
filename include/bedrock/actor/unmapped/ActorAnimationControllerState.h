#pragma once

#include "./ActorAnimationController.h"
#include "../../../unmapped/RenderParams.h"
#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/ExpressionNode.h"
#include "../../../json/Value.h"
#include <string>


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
//  void addEntryActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
//  void addExitActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void toJson(Json::Value &, ActorAnimationController const&)const;
    ~ActorAnimationControllerState();
};
