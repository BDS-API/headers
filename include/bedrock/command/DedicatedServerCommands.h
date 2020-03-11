#pragma once

#include "../../unmapped/WhitelistFile.h"
#include "../Minecraft.h"
#include "../IMinecraftApp.h"
#include "../level/Level.h"
#include "../level/storage/LevelStorage.h"
#include "../DedicatedServer.h"


class DedicatedServerCommands {

public:
    static std::string mSaveAllFileList;


    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
