#pragma once

class SavedDataStorage {

public:
    virtual ~SavedDataStorage();

    void SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::string const&);
    void set(std::string const&, SavedData &);
    void save(void);
    void _save(SavedData const&);
};
