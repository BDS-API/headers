#pragma once

#include "../../Minecraft"
#include "../Command"


class ServerCommand : Command {

public:
    static long mGame;

    virtual ServerCommand::~ServerCommand()

    ServerCommand(void);
    void setup(Minecraft &);
};
