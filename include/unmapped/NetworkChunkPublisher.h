#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/level/chunksource/ChunkSource"
#include "../bedrock/network/packet/LevelChunkPacket"


class NetworkChunkPublisher {

public:
    virtual NetworkChunkPublisher::~NetworkChunkPublisher();

    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char);
    void prepareRegion(ChunkSource &, ChunkPos &);
    void destroyRegion(void);
    void clearRegion(void);
    void moveRegion(BlockPos const&, unsigned int, float);
    void getChunksSentSinceStart(void)const;
    void sendQueuedChunks(void);
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *);
    void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void ()(BinaryDataOutput &)> &&);
};
