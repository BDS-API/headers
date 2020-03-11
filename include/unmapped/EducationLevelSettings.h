#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include "./EducationLevelSettings.h"
#include <string>


class EducationLevelSettings {

public:

    EducationLevelSettings(EducationLevelSettings const&);
    ~EducationLevelSettings();
    EducationLevelSettings();
    std::string getCommandOverrideFunctor()const;
    void save(LevelStorage const&);
    void load(LevelStorage const&);
};
