#pragma once

#include <string>


class SavedData {

public:
    virtual ~SavedData();

    SavedData(std::string const&);
    void setDirty(bool);
    bool isDirty()const;
    std::string getId()const;
};
