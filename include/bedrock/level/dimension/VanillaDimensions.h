#pragma once

#include <string>


namespace VanillaDimensions {

    static long TheEndSpawnPoint;
    static long Overworld;
    static long Nether;
    static long TheEnd;
    static long Undefined;
    static std::string DimensionMap;

    void fromSerializedInt(int); // _ZN17VanillaDimensions17fromSerializedIntEi
//  void toSerializedInt(AutomaticID<Dimension, int> const&); //TODO: incomplete function definition // _ZN17VanillaDimensions15toSerializedIntERK11AutomaticIDI9DimensioniE
    void fromString(std::string const&); // _ZN17VanillaDimensions10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string toString(AutomaticID<Dimension, int> const&); //TODO: incomplete function definition // _ZN17VanillaDimensions8toStringB5cxx11ERK11AutomaticIDI9DimensioniE
//  void convertPointBetweenDimensions(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&); //TODO: incomplete function definition // _ZN17VanillaDimensions29convertPointBetweenDimensionsERK4Vec3RS0_11AutomaticIDI9DimensioniES6_RK23DimensionConversionData
//  void _convertPointFromOverworld(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN17VanillaDimensions26_convertPointFromOverworldERK4Vec3RS0_11AutomaticIDI9DimensioniEi
//  void _convertPointFromNether(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN17VanillaDimensions23_convertPointFromNetherERK4Vec3RS0_11AutomaticIDI9DimensioniEi
//  void _convertPointFromEnd(Vec3 const&, Vec3 &, AutomaticID<Dimension, int>, Vec3 const&); //TODO: incomplete function definition // _ZN17VanillaDimensions20_convertPointFromEndERK4Vec3RS0_11AutomaticIDI9DimensioniES2_
};
