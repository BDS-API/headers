#pragma once

class SavedData {

public:
    virtual ~SavedData();

    void SavedData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setDirty(bool);
    bool isDirty(void)const;
};
