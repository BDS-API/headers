#pragma once

#include "../Command.h"
#include "../../Minecraft.h"


class ServerCommand : Command {

public:
    static long mGame;

    ~ServerCommand();
    ServerCommand();
    void setup(Minecraft &);
};
