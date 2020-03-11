#pragma once

#include <memory>
#include "../level/chunksource/ChunkViewSource.h"


class CommandArea {

public:

    void getRegion();
    void getRegion()const;
    CommandArea(std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>);
    ~CommandArea();
};
