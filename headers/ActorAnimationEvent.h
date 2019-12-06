#pragma once

class ActorAnimationEvent {

public:

    void fire(RenderParams &, Actor &)const;
    void ActorAnimationEvent(float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CurrentCmdVersion);
    void toJson(Json::Value &)const;
    void ActorAnimationEvent(ActorAnimationEvent const&);
    void ActorAnimationEvent(ActorAnimationEvent&&);
};
