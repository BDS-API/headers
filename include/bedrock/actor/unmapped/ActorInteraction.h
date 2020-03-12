#pragma once

#include <functional>
#include <string>


class ActorInteraction {

public:
    void interact();
    std::string getInteractText()const;
    void setInteractText(std::string const&);
    ~ActorInteraction();
    void capture(std::function<void (void)>);
    ActorInteraction(bool);
    void shouldCapture()const;
};
