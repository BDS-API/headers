#pragma once

#include "../bedrock/actor/Player.h"
#include <string>
#include "PlayerStorageIds.h"
#include "../core/Path.h"
#include <functional>
#include "../bedrock/level/storage/LevelStorage.h"


namespace PlayerDataSystem {

//  void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getServerId(LevelStorage &, PlayerStorageIds const&);
    void legacyConsolePlayerKey(std::string const&);
//  std::string serverKey(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void loadLocalPlayerData(LevelStorage &);
    void legacyLoadClientPlayer(std::string const&, Core::Path const&);
    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool (std::string const&, std::string const&)>);
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool);
    void legacyLoadPlayer(LevelStorage &, std::string const&);
//  std::string playerKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool);
    std::string serverKey(LevelStorage &, Player const&);
    void getPlayerFilename(Core::Path const&, std::string const&);
};
