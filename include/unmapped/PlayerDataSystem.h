#pragma once

#include "../bedrock/level/storage/LevelStorage"
#include "../core/Path"


class PlayerDataSystem {

public:

    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool ()(std::string const&, std::string const&)>);
    void getPlayerFilename(Core::Path const&, std::string const&);
    void legacyConsolePlayerKey(std::string const&);
    void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>);
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool);
    void loadLocalPlayerData(LevelStorage &);
    void legacyLoadPlayer(LevelStorage &, std::string const&);
    void legacyLoadClientPlayer(std::string const&, Core::Path const&);
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool);
};
