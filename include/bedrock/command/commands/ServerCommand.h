#pragma once

#include "../Command.h"


class ServerCommand : Command {

public:
    static long mGame;

    ~ServerCommand();
    void setup(Minecraft &);
    ServerCommand();
};
