#pragma once

#include <string>


class SavedDataStorage {

public:
    ~SavedDataStorage(); // _ZN16SavedDataStorageD2Ev
    SavedDataStorage(LevelStorage *); // _ZN16SavedDataStorageC2EP12LevelStorage
    void loadAndSet(SavedData &, std::string const&); // _ZN16SavedDataStorage10loadAndSetER9SavedDataRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void set(std::string const&, SavedData &); // _ZN16SavedDataStorage3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER9SavedData
    void save(); // _ZN16SavedDataStorage4saveEv
    void _save(SavedData const&); // _ZN16SavedDataStorage5_saveERK9SavedData
};
