#pragma once

#include <string>
#include <memory>


namespace DebugRenderer {

    void captureServerChunkData();
    void drawBoxTick(Vec3 const&, Vec3 const&, Color const&);
    void drawLine(Vec3 const&, Vec3 const&, Color const&);
    void drawText(std::string const&, Vec3 const&, Color const&);
//  void setChunkMapDebugDraw(AutomaticID<Dimension, int>, std::shared_ptr<std::unordered_map<ChunkPos, ChunkState, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, ChunkState>>>> &); //TODO: incomplete function definition
};
