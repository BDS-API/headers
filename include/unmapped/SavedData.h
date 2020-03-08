#pragma once



class SavedData {

public:
    virtual SavedData::~SavedData()

    SavedData(std::string const&);
    void setDirty(bool);
    bool isDirty()const;
};
