#pragma once

class ActorAnimationControllerStateTransition {

public:

    void ActorAnimationControllerStateTransition(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void shouldTransition(RenderParams &)const;
    void toJson(Json::Value &)const;
    void ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
};
