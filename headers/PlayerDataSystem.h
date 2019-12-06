#pragma once

class PlayerDataSystem {

public:

    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
    void getPlayerFilename(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void legacyConsolePlayerKey(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>);
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool);
    void loadLocalPlayerData(LevelStorage &);
    void legacyLoadPlayer(LevelStorage &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void legacyLoadClientPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&);
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool);
};
