#pragma once

class VanillaDimensions {

public:
    static long VanillaDimensions::TheEndSpawnPoint;
    static long VanillaDimensions::Overworld;
    static long VanillaDimensions::Nether;
    static long VanillaDimensions::TheEnd;
    static long VanillaDimensions::Undefined;


    void fromSerializedInt(int);
    void toSerializedInt(AutomaticID<Dimension, int> const&);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void convertPointBetweenDimensions(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&);
    void _convertPointFromOverworld(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromNether(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, int);
    void _convertPointFromEnd(Vec3 const&, Vec3&, AutomaticID<Dimension, int>, Vec3 const&);
};