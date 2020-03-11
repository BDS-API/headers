#pragma once

#include <utility>
#include <unordered_map>
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Color.h"
#include <memory>
#include "./Dimension.h"
#include "../bedrock/util/ChunkPos.h"
#include <functional>
#include <string>


class DebugRenderer {

public:

    void drawLine(Vec3 const&, Vec3 const&, Color const&);
    void drawBoxTick(Vec3 const&, Vec3 const&, Color const&);
    void drawText(std::string const&, Vec3 const&, Color const&);
    void captureServerChunkData();
//  void setChunkMapDebugDraw(AutomaticID<Dimension, int>, std::shared_ptr<std::unordered_map<ChunkPos, ChunkState, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, ChunkState>>>> &); //TODO: incomplete function definition
};
