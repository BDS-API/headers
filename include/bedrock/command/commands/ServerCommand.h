#pragma once

#include "../../Minecraft"
#include "../Command"


class ServerCommand : Command {

public:
    static long mGame;

    ServerCommand::~ServerCommand()

    ServerCommand(void);
    void setup(Minecraft &);
};
