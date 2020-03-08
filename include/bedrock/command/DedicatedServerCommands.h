#pragma once

#include "../../unmapped/Minecraft"


class DedicatedServerCommands {

public:
    static long mSaveAllFileList[abi:cxx11];


    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
