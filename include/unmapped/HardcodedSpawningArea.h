#pragma once

#include "./HardcodedSpawningArea.h"


namespace LevelChunk {

class HardcodedSpawningArea {

public:

    HardcodedSpawningArea();
    void operator==(LevelChunk::HardcodedSpawningArea const&)const;
    HardcodedSpawningArea(LevelChunk::HardcodedSpawningArea const&);
};

}