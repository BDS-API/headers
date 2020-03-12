#pragma once

#include <string>


class SavedData {

public:
    ~SavedData();
    SavedData(std::string const&);
    std::string getId()const;
    void setDirty(bool);
    bool isDirty()const;
};
