#pragma once

#include "../bedrock/level/chunksource/ChunkSource"
#include "../bedrock/network/packet/LevelChunkPacket"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/ChunkPos"


class NetworkChunkPublisher {

public:
    virtual NetworkChunkPublisher::~NetworkChunkPublisher()

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
