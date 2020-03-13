#pragma once

#include "../../util/Brightness.h"


class SubChunkLightUpdate {

public:
    SubChunkLightUpdate(SubChunkBlockPos const&, Brightness, Brightness, Brightness, Brightness, bool); // _ZN19SubChunkLightUpdateC2ERK16SubChunkBlockPos10BrightnessS3_S3_S3_b
    SubChunkLightUpdate(SubChunkLightUpdate const&); // _ZN19SubChunkLightUpdateC2ERKS_
};
