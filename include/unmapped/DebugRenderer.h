#pragma once

#include <string>
#include <unordered_map>
#include "Dimension.h"
#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/util/ChunkPos.h"
#include <functional>
#include "../bedrock/util/Color.h"
#include <utility>


namespace DebugRenderer {

//  void setChunkMapDebugDraw(AutomaticID<Dimension, int>, std::shared_ptr<std::unordered_map<ChunkPos, ChunkState, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, ChunkState>>>> &); //TODO: incomplete function definition
    void drawBoxTick(Vec3 const&, Vec3 const&, Color const&);
    void drawLine(Vec3 const&, Vec3 const&, Color const&);
    void captureServerChunkData();
    void drawText(std::string const&, Vec3 const&, Color const&);
};
