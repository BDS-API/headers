#pragma once

#include <string>
#include <memory>


namespace DebugRenderer {

    void drawLine(Vec3 const&, Vec3 const&, Color const&); // _ZN13DebugRenderer8drawLineERK4Vec3S2_RK5Color
    void drawBoxTick(Vec3 const&, Vec3 const&, Color const&); // _ZN13DebugRenderer11drawBoxTickERK4Vec3S2_RK5Color
    void drawText(std::string const&, Vec3 const&, Color const&); // _ZN13DebugRenderer8drawTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3RK5Color
    void captureServerChunkData(); // _ZN13DebugRenderer22captureServerChunkDataEv
//  void setChunkMapDebugDraw(AutomaticID<Dimension, int>, std::shared_ptr<std::unordered_map<ChunkPos, ChunkState, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, ChunkState>>>> &); //TODO: incomplete function definition // _ZN13DebugRenderer20setChunkMapDebugDrawE11AutomaticIDI9DimensioniERSt10shared_ptrISt13unordered_mapI8ChunkPos10ChunkStateSt4hashIS5_ESt8equal_toIS5_ESaISt4pairIKS5_S6_EEEE
};
