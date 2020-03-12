#pragma once

#include "../../../unmapped/Dimension.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/DimensionConversionData.h"
#include <string>


namespace VanillaDimensions {

    static long TheEndSpawnPoint;
    static long Overworld;
    static long Nether;
    static long TheEnd;
    static long Undefined;
    static std::string DimensionMap;

//  void convertPointBetweenDimensions(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&); //TODO: incomplete function definition
    void fromSerializedInt(int);
//  void toSerializedInt(AutomaticID<Dimension, int> const&); //TODO: incomplete function definition
//  void _convertPointFromOverworld(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    void fromString(std::string const&);
//  void _convertPointFromNether(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
//  std::string toString(AutomaticID<Dimension, int> const&); //TODO: incomplete function definition
//  void _convertPointFromEnd(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, Vec3 const&); //TODO: incomplete function definition
};
