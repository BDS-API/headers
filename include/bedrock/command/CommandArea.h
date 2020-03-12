#pragma once

#include <memory>


class CommandArea {

public:
    ~CommandArea();
    void getRegion()const;
    CommandArea(std::unique_ptr<ChunkViewSource>);
    void getRegion();
};
