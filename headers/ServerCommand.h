#pragma once

class ServerCommand : Command {

public:
    static long mGame;

    virtual ~ServerCommand();

    void ServerCommand(void);
    void setup(Minecraft &);
};
