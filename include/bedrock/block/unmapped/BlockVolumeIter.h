#pragma once

#include "./BlockVolumeIter.h"


namespace BlockVolume {

class BlockVolumeIter {

public:

    void _incrementPos();
    void operator!=(BlockVolume::BlockVolumeIter const&)const;
    void operator==(BlockVolume::BlockVolumeIter const&)const;
    void operator*();
};

}