#pragma once

#include <functional>
#include <string>


class ActorInteraction {

public:

    ActorInteraction(bool);
    void interact();
    void setInteractText(std::string const&);
    std::string getInteractText()const;
//  void capture(std::function<void (void)>); //TODO: incomplete function definition
    void shouldCapture()const;
    ~ActorInteraction();
};
