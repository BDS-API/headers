#pragma once



class SavedData {

public:
    SavedData::~SavedData()

    SavedData(std::string const&);
    void setDirty(bool);
    bool isDirty()const;
};
