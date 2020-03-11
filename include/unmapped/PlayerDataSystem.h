#pragma once

#include "../core/Path.h"
#include "./PlayerStorageIds.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include "../bedrock/actor/Player.h"
#include <functional>
#include <string>


class PlayerDataSystem {

public:

    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool (std::string const&, std::string const&)>);
    void getPlayerFilename(Core::Path const&, std::string const&);
//  std::string serverKey(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  std::string playerKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string serverKey(LevelStorage &, Player const&);
    void legacyConsolePlayerKey(std::string const&);
//  void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getServerId(LevelStorage &, PlayerStorageIds const&);
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool);
    void loadLocalPlayerData(LevelStorage &);
    void legacyLoadPlayer(LevelStorage &, std::string const&);
    void legacyLoadClientPlayer(std::string const&, Core::Path const&);
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool);
};
