#pragma once

#include "../bedrock/level/Level.h"
#include "TransferBuilder.h"
#include "ActiveTransfersManager.h"
#include "NetworkHandler.h"
#include "NetworkIdentifier.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/io/BinaryDataOutput.h"
#include "../bedrock/util/ChunkPos.h"
#include <functional>
#include "../bedrock/level/chunksource/ChunkSource.h"
#include "../bedrock/network/packet/LevelChunkPacket.h"


class NetworkChunkPublisher {

public:
    ~NetworkChunkPublisher();
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *);
    void clearRegion();
    void getChunksSentSinceStart()const;
    void moveRegion(BlockPos const&, unsigned int, float);
    void sendQueuedChunks();
    void destroyRegion();
    void prepareRegion(ChunkSource &, ChunkPos &);
    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char);
    void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void (BinaryDataOutput &)> &&);
};
