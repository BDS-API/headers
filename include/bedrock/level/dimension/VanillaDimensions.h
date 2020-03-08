#pragma once

#include "../../../unmapped/Dimension"
#include "../../util/Vec3"
#include "../../../unmapped/DimensionConversionData"


class VanillaDimensions {

public:
    static long TheEndSpawnPoint;
    static long Overworld;
    static long Nether;
    static long TheEnd;
    static long Undefined;
    static long DimensionMap[abi:cxx11];


    void fromSerializedInt(int);
    void toSerializedInt(AutomaticID<Dimension, int> const&);
    void fromString(std::string const&);
    void convertPointBetweenDimensions(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&);
    void _convertPointFromOverworld(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromNether(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromEnd(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, Vec3 const&);
};
