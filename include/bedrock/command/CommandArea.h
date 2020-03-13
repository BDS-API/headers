#pragma once

#include <memory>


class CommandArea {

public:
    void getRegion(); // _ZN11CommandArea9getRegionEv
    void getRegion()const; // _ZNK11CommandArea9getRegionEv
    CommandArea(std::unique_ptr<ChunkViewSource>); // _ZN11CommandAreaC2ESt10unique_ptrI15ChunkViewSourceSt14default_deleteIS1_EE
    ~CommandArea(); // _ZN11CommandAreaD2Ev
};
