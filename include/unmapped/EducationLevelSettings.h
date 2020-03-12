#pragma once

#include <string>


class EducationLevelSettings {

public:
    EducationLevelSettings(EducationLevelSettings const&);
    EducationLevelSettings();
    void save(LevelStorage const&);
    ~EducationLevelSettings();
    std::string getCommandOverrideFunctor()const;
    void load(LevelStorage const&);
};
