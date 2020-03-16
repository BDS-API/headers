#pragma once

#include "../Command.h"


class ServerCommand : public Command {

public:
    static long mGame;

    virtual ~ServerCommand(); // _ZN13ServerCommandD2Ev
    virtual void __fake_function0(); // fake
    ServerCommand(); // _ZN13ServerCommandC2Ev
    void setup(Minecraft &); // _ZN13ServerCommand5setupER9Minecraft
};
