#pragma once

#include "../../unmapped/WhitelistFile"
#include "../DedicatedServer"
#include "../Minecraft"
#include "../IMinecraftApp"
#include "../level/storage/LevelStorage"
#include "../level/Level"


class DedicatedServerCommands {

public:
    static long mSaveAllFileList[abi:cxx11];


    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
