#pragma once

#include "../../Minecraft.h"
#include "../Command.h"


class ServerCommand : Command {

public:
    static long mGame;

    virtual ~ServerCommand();

    ServerCommand();
    void setup(Minecraft &);
};
