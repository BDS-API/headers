#pragma once

class EducationLevelSettings {

public:

    EducationLevelSettings(EducationLevelSettings const&);
    EducationLevelSettings(void);
    void save(LevelStorage const&);
    void load(LevelStorage const&);
};
