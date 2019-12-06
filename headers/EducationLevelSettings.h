#pragma once

class EducationLevelSettings {

public:

    void EducationLevelSettings(EducationLevelSettings const&);
    void EducationLevelSettings(void);
    void save(LevelStorage const&);
    void load(LevelStorage const&);
};
