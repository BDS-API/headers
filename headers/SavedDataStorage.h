#pragma once

class SavedDataStorage {

public:
    virtual ~SavedDataStorage();

    void SavedDataStorage(LevelStorage *);
    void loadAndSet(SavedData &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, SavedData &);
    void save(void);
    void _save(SavedData const&);
};
