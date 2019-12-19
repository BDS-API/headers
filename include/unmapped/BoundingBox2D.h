#pragma once

using namespace StructureTemplateFeature;

class BoundingBox2D {

public:

    BoundingBox2D(int, int, int, int);
    bool isInside(BlockPos const&)const;
};
