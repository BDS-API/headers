#pragma once

class ActorInteraction {

public:

    ActorInteraction(bool);
    void interact(void);
    void setInteractText(std::string const&);
    void capture(std::function<void ()(void)>);
    void shouldCapture(void)const;
};
