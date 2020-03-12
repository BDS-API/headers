#pragma once

#include <string>
#include <functional>


namespace PlayerDataSystem {

    void loadLocalPlayerData(LevelStorage &);
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool);
    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool (std::string const&, std::string const&)>);
    void legacyLoadPlayer(LevelStorage &, std::string const&);
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool);
//  std::string serverKey(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void legacyLoadClientPlayer(std::string const&, Core::Path const&);
    void legacyConsolePlayerKey(std::string const&);
//  std::string playerKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string serverKey(LevelStorage &, Player const&);
//  void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string getServerId(LevelStorage &, PlayerStorageIds const&);
    void getPlayerFilename(Core::Path const&, std::string const&);
};
