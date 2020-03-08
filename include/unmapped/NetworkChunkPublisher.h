#pragma once

#include "../bedrock/util/ChunkPos"
#include "../bedrock/network/packet/LevelChunkPacket"
#include "../bedrock/util/BlockPos"
#include "../bedrock/level/chunksource/ChunkSource"
#include "../bedrock/level/Level"


class NetworkChunkPublisher {

public:
    NetworkChunkPublisher::~NetworkChunkPublisher()

    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char);
    void prepareRegion(ChunkSource &, ChunkPos &);
    void destroyRegion();
    void clearRegion();
    void moveRegion(BlockPos const&, unsigned int, float);
    void getChunksSentSinceStart()const;
    void sendQueuedChunks();
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *);
    void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void ()(BinaryDataOutput &)> &&);
};
