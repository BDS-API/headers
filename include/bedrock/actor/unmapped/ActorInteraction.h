#pragma once

#include <string>
#include <functional>


class ActorInteraction {

public:
    void setInteractText(std::string const&);
    ActorInteraction(bool);
    void capture(std::function<void (void)>);
    void interact();
    ~ActorInteraction();
    void shouldCapture()const;
    std::string getInteractText()const;
};
