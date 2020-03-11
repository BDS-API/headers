#pragma once

#include "./TransferBuilder.h"
#include "./ActiveTransfersManager.h"
#include "../bedrock/io/BinaryDataOutput.h"
#include "../bedrock/level/chunksource/ChunkSource.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/network/packet/LevelChunkPacket.h"
#include "./NetworkIdentifier.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"
#include "./NetworkHandler.h"


class NetworkChunkPublisher {

public:
    virtual ~NetworkChunkPublisher();

    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char);
    void prepareRegion(ChunkSource &, ChunkPos &);
    void destroyRegion();
    void clearRegion();
    void moveRegion(BlockPos const&, unsigned int, float);
    void getChunksSentSinceStart()const;
    void sendQueuedChunks();
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *);
//  void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void (BinaryDataOutput &)> &&); //TODO: incomplete function definition
};
