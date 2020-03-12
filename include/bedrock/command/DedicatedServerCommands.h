#pragma once



namespace DedicatedServerCommands {

    static std::string mSaveAllFileList;

    void setupStandaloneServer(Minecraft &, IMinecraftApp &, Level &, LevelStorage &, DedicatedServer &, WhitelistFile &);
};
