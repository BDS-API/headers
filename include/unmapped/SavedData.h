#pragma once

#include <string>


class SavedData {

public:
    ~SavedData();
    void setDirty(bool);
    SavedData(std::string const&);
    std::string getId()const;
    bool isDirty()const;
};
