#pragma once

class VanillaDimensions {

public:
    static long VanillaDimensions::TheEndSpawnPoint;
    static long VanillaDimensions::Overworld;
    static long VanillaDimensions::Nether;
    static long VanillaDimensions::TheEnd;
    static long VanillaDimensions::Undefined;
    static long VanillaDimensions::DimensionMap[abi:cxx11];


    void fromSerializedInt(int);
    void toSerializedInt(AutomaticID<Dimension, int> const&);
    void fromString(std::string const&);
    void convertPointBetweenDimensions(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&);
    void _convertPointFromOverworld(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromNether(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromEnd(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, Vec3 const&);
};
