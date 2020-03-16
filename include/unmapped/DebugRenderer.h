#pragma once

#include <memory>
#include <string>


namespace DebugRenderer {

    void drawLine(Vec3 const&, Vec3 const&, Color const&); // _ZN13DebugRenderer8drawLineERK4Vec3S2_RK5Color
    void drawBoxTick(Vec3 const&, Vec3 const&, Color const&); // _ZN13DebugRenderer11drawBoxTickERK4Vec3S2_RK5Color
    void drawText(std::string const&, Vec3 const&, Color const&); // _ZN13DebugRenderer8drawTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3RK5Color
    void captureServerChunkData(); // _ZN13DebugRenderer22captureServerChunkDataEv
//    void setChunkMapDebugDraw(long, std::shared_ptr<std::unordered_map<ChunkPos, long, std::hash<ChunkPos>, long, std::allocator<std::pair<ChunkPos const, long>>>> &); //TODO: incomplete function definition // _ZN13DebugRenderer20setChunkMapDebugDrawE11AutomaticIDI9DimensioniERSt10shared_ptrISt13unordered_mapI8ChunkPos10ChunkStateSt4hashIS5_ESt8equal_toIS5_ESaISt4pairIKS5_S6_EEEE
};
