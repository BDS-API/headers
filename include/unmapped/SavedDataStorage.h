#pragma once

#include "SavedData.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include <string>


class SavedDataStorage {

public:
    ~SavedDataStorage();
    void set(std::string const&, SavedData &);
    void loadAndSet(SavedData &, std::string const&);
    void save();
    SavedDataStorage(LevelStorage *);
    void _save(SavedData const&);
};
