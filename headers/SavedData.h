#pragma once

class SavedData {

public:
    virtual ~SavedData();

    void SavedData(std::string const&);
    void setDirty(bool);
    bool isDirty(void)const;
};
