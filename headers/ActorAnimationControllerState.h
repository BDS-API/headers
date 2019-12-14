#pragma once

class ActorAnimationControllerState {

public:

    void addVariable(std::string const&);
    void setVariables(RenderParams &)const;
    void removeVariables(RenderParams &)const;
    void addBlendTransitionKeyFrame(float, float);
    void setBlendTransitionTime(float);
    void ActorAnimationControllerState(HashedString const&);
    void addAnimation(HashedString const&);
    void addAnimation(HashedString const&, ExpressionNode const&);
    void addTransition(std::string const&, std::string const&, bool);
    void getNextState(RenderParams &)const;
    void addParticleEffect(void);
    void addSoundEffect(void);
    void addEntryActorEvent(float, std::string const&, CurrentCmdVersion);
    void addExitActorEvent(float, std::string const&, CurrentCmdVersion);
    void toJson(Json::Value &, ActorAnimationController const&)const;
};
