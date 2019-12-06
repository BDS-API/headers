#pragma once

class ServerCommand : Command {

public:
    static long ServerCommand::mGame;

    virtual ~ServerCommand();

    void ServerCommand(void);
    void setup(Minecraft &);
};
