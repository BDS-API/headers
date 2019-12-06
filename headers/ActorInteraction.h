#pragma once

class ActorInteraction {

public:

    void ActorInteraction(bool);
    void interact(void);
    void setInteractText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void capture(std::function<void ()(void)>);
    void shouldCapture(void)const;
};
