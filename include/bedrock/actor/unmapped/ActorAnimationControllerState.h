#pragma once

#include <string>


class ActorAnimationControllerState {

public:
    void addAnimation(HashedString const&, ExpressionNode const&);
    ActorAnimationControllerState(HashedString const&);
    void addTransition(std::string const&, std::string const&, bool);
//  void addExitActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void toJson(Json::Value &, ActorAnimationController const&)const;
    void removeVariables(RenderParams &)const;
    void addVariable(std::string const&);
    void addBlendTransitionKeyFrame(float, float);
    void addAnimation(HashedString const&);
    void addSoundEffect();
    void addParticleEffect();
    void setBlendTransitionTime(float);
    ~ActorAnimationControllerState();
    void getNextState(RenderParams &)const;
//  void addEntryActorEvent(float, std::string const&, CurrentCmdVersion); //TODO: incomplete function definition
    void setVariables(RenderParams &)const;
};
