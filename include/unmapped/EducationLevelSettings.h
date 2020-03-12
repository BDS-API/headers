#pragma once

#include "../bedrock/level/storage/LevelStorage.h"


class EducationLevelSettings {

public:
    ~EducationLevelSettings();
    std::string getCommandOverrideFunctor()const;
    EducationLevelSettings(EducationLevelSettings const&);
    void load(LevelStorage const&);
    void save(LevelStorage const&);
    EducationLevelSettings();
};
