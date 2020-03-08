#pragma once

#include "../level/Level"
#include "../IMinecraftApp"
#include "../Minecraft"
#include "../DedicatedServer"
#include "../level/storage/LevelStorage"
#include "../../unmapped/WhitelistFile"


class DedicatedServerCommands {

public:
    static long mSaveAllFileList[abi:cxx11];


    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
