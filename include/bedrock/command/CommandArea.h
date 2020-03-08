#pragma once

#include "../level/chunksource/ChunkViewSource"


class CommandArea {

public:

    void getRegion();
    void getRegion()const;
    CommandArea(std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>);
};
