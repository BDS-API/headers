#pragma once

#include "../IMinecraftApp.h"
#include <string>
#include "../DedicatedServer.h"
#include "../level/storage/LevelStorage.h"
#include "../Minecraft.h"
#include "../level/Level.h"
#include "../../unmapped/WhitelistFile.h"


namespace DedicatedServerCommands {

    static std::string mSaveAllFileList;

    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
