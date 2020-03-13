#pragma once

#include <string>


class LevelStorage {

public:
    class Batch;

    static std::string LOCAL_PLAYER_TAG;
    static std::string LEGACY_CONSOLE_PLAYER_PREFIX;

    ~LevelStorage(); // _ZN12LevelStorageD2Ev
    virtual void createWriteBatch(); // _ZN12LevelStorage16createWriteBatchEv
//  virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN12LevelStorage15clonePlayerDataEN3gsl17basic_string_spanIKcLln1EEES3_
//  virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const; //TODO: incomplete function definition // _ZNK12LevelStorage8loadDataEN3gsl17basic_string_spanIKcLln1EEERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void freeCaches(); // _ZN12LevelStorage10freeCachesEv
    virtual void corruptLevel(); // _ZN12LevelStorage12corruptLevelEv
    std::string loadAllPlayerIDs(bool)const; // _ZNK12LevelStorage16loadAllPlayerIDsB5cxx11Eb
    void save(Actor &); // _ZN12LevelStorage4saveER5Actor
    void saveData(std::string const&, CompoundTag const&); // _ZN12LevelStorage8saveDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11CompoundTag
    void loadServerPlayerData(Player const&, bool); // _ZN12LevelStorage20loadServerPlayerDataERK6Playerb
    void loadLocalPlayerData(); // _ZN12LevelStorage19loadLocalPlayerDataEv
    void loadPlayerData(PlayerStorageIds const&, bool); // _ZN12LevelStorage14loadPlayerDataERK16PlayerStorageIdsb
    void loadLostPlayerData(Player const&, bool); // _ZN12LevelStorage18loadLostPlayerDataERK6Playerb
//  void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN12LevelStorage21loadPlayerDataFromTagEN3gsl17basic_string_spanIKcLln1EEE
    std::string getServerId(PlayerStorageIds const&); // _ZN12LevelStorage11getServerIdB5cxx11ERK16PlayerStorageIds
    std::string getServerId(Player const&, bool); // _ZN12LevelStorage11getServerIdB5cxx11ERK6Playerb
    LevelStorage(); // _ZN12LevelStorageC2Ev
    class Batch {

    public:
        ~Batch(); // _ZN12LevelStorage5BatchD2Ev
        Batch(); // _ZN12LevelStorage5BatchC2Ev
    };
};
