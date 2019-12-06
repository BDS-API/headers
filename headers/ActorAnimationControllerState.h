#pragma once

class ActorAnimationControllerState {

public:

    void addVariable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setVariables(RenderParams &)const;
    void removeVariables(RenderParams &)const;
    void addBlendTransitionKeyFrame(float, float);
    void setBlendTransitionTime(float);
    void ActorAnimationControllerState(HashedString const&);
    void addAnimation(HashedString const&);
    void addAnimation(HashedString const&, ExpressionNode const&);
    void addTransition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void getNextState(RenderParams &)const;
    void addParticleEffect(void);
    void addSoundEffect(void);
    void addEntryActorEvent(float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CurrentCmdVersion);
    void addExitActorEvent(float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CurrentCmdVersion);
    void toJson(Json::Value &, ActorAnimationController const&)const;
};
