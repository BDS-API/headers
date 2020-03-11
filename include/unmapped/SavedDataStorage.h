#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include "./SavedData.h"
#include <string>


class SavedDataStorage {

public:
    virtual ~SavedDataStorage();

    SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::string const&);
    void set(std::string const&, SavedData &);
    void save();
    void _save(SavedData const&);
};
