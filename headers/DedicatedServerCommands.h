#pragma once

class DedicatedServerCommands {

public:
    static long DedicatedServerCommands::mSaveAllFileList[abi:cxx11];


    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
