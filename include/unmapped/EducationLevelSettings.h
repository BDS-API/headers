#pragma once

#include "../bedrock/level/storage/LevelStorage"


class EducationLevelSettings {

public:

    EducationLevelSettings(EducationLevelSettings const&);
    EducationLevelSettings(void);
    void save(LevelStorage const&);
    void load(LevelStorage const&);
};
