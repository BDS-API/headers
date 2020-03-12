#pragma once

#include "LevelData.h"


class LevelDataWrapper {

public:
    void operator*();
    void setLevelData(LevelData &);
    void operator->();
    void operator->()const;
    void operator*()const;
    LevelDataWrapper();
    void resetLevelDataPointer();
    ~LevelDataWrapper();
};
