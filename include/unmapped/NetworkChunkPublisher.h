#pragma once

#include <functional>


class NetworkChunkPublisher {

public:
    ~NetworkChunkPublisher();
    void clearRegion();
    void moveRegion(BlockPos const&, unsigned int, float);
    void sendQueuedChunks();
    void destroyRegion();
    void prepareRegion(ChunkSource &, ChunkPos &);
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *);
    void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void (BinaryDataOutput &)> &&);
    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char);
    void getChunksSentSinceStart()const;
};
