#pragma once

#include "../level/chunksource/ChunkViewSource"


class CommandArea {

public:

    void getRegion(void);
    void getRegion(void)const;
    CommandArea(std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>);
};
