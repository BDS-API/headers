#pragma once

#include <string>


class EducationLevelSettings {

public:
    EducationLevelSettings(EducationLevelSettings const&); // _ZN22EducationLevelSettingsC2ERKS_
    ~EducationLevelSettings(); // _ZN22EducationLevelSettingsD2Ev
    EducationLevelSettings(); // _ZN22EducationLevelSettingsC2Ev
    std::string getCommandOverrideFunctor()const; // _ZNK22EducationLevelSettings25getCommandOverrideFunctorB5cxx11Ev
    void save(LevelStorage const&); // _ZN22EducationLevelSettings4saveERK12LevelStorage
    void load(LevelStorage const&); // _ZN22EducationLevelSettings4loadERK12LevelStorage
};
