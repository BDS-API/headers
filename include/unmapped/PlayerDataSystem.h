#pragma once

#include <string>
#include <functional>


namespace PlayerDataSystem {

    void forEachIdByPrecedence(PlayerStorageIds const&, std::function<bool (std::string const&, std::string const&)>); // _ZN16PlayerDataSystem21forEachIdByPrecedenceERK16PlayerStorageIdsSt8functionIFbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_EE
    void getPlayerFilename(Core::Path const&, std::string const&); // _ZN16PlayerDataSystem17getPlayerFilenameERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string serverKey(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN16PlayerDataSystem9serverKeyB5cxx11ER12LevelStorageN3gsl17basic_string_spanIKcLln1EEE
//  std::string playerKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN16PlayerDataSystem9playerKeyB5cxx11EN3gsl17basic_string_spanIKcLln1EEE
    std::string serverKey(LevelStorage &, Player const&); // _ZN16PlayerDataSystem9serverKeyB5cxx11ER12LevelStorageRK6Player
    void legacyConsolePlayerKey(std::string const&); // _ZN16PlayerDataSystem22legacyConsolePlayerKeyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void loadPlayerDataFromTag(LevelStorage &, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN16PlayerDataSystem21loadPlayerDataFromTagER12LevelStorageN3gsl17basic_string_spanIKcLln1EEE
    std::string getServerId(LevelStorage &, PlayerStorageIds const&); // _ZN16PlayerDataSystem11getServerIdB5cxx11ER12LevelStorageRK16PlayerStorageIds
    void loadPlayerData(LevelStorage &, PlayerStorageIds const&, bool); // _ZN16PlayerDataSystem14loadPlayerDataER12LevelStorageRK16PlayerStorageIdsb
    void loadLocalPlayerData(LevelStorage &); // _ZN16PlayerDataSystem19loadLocalPlayerDataER12LevelStorage
    void legacyLoadPlayer(LevelStorage &, std::string const&); // _ZN16PlayerDataSystem16legacyLoadPlayerER12LevelStorageRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void legacyLoadClientPlayer(std::string const&, Core::Path const&); // _ZN16PlayerDataSystem22legacyLoadClientPlayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Core4PathE
    void loadLostData(LevelStorage &, PlayerStorageIds const&, bool); // _ZN16PlayerDataSystem12loadLostDataER12LevelStorageRK16PlayerStorageIdsb
};
