#pragma once

#include "../Command.h"


class ServerCommand : Command {

public:
    static long mGame;

    ~ServerCommand(); // _ZN13ServerCommandD2Ev
    ServerCommand(); // _ZN13ServerCommandC2Ev
    void setup(Minecraft &); // _ZN13ServerCommand5setupER9Minecraft
};
