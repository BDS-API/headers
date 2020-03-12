#pragma once

#include "../level/chunksource/ChunkViewSource.h"
#include <memory>


class CommandArea {

public:
    CommandArea(std::unique_ptr<ChunkViewSource>);
    void getRegion()const;
    void getRegion();
    ~CommandArea();
};
