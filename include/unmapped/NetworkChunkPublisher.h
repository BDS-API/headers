#pragma once

#include <functional>


class NetworkChunkPublisher {

public:
    ~NetworkChunkPublisher(); // _ZN21NetworkChunkPublisherD2Ev
    NetworkChunkPublisher(Level &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&, unsigned char); // _ZN21NetworkChunkPublisherC2ER5LevelR14NetworkHandlerRN15ClientBlobCache6Server22ActiveTransfersManagerERK17NetworkIdentifierh
    void prepareRegion(ChunkSource &, ChunkPos &); // _ZN21NetworkChunkPublisher13prepareRegionER11ChunkSourceR8ChunkPos
    void destroyRegion(); // _ZN21NetworkChunkPublisher13destroyRegionEv
    void clearRegion(); // _ZN21NetworkChunkPublisher11clearRegionEv
    void moveRegion(BlockPos const&, unsigned int, float); // _ZN21NetworkChunkPublisher10moveRegionERK8BlockPosjf
    void getChunksSentSinceStart()const; // _ZNK21NetworkChunkPublisher23getChunksSentSinceStartEv
    void sendQueuedChunks(); // _ZN21NetworkChunkPublisher16sendQueuedChunksEv
    void _sendQueuedChunk(ChunkPos const&, ClientBlobCache::Server::TransferBuilder *); // _ZN21NetworkChunkPublisher16_sendQueuedChunkERK8ChunkPosPN15ClientBlobCache6Server15TransferBuilderE
    void _serializeAndCache(LevelChunkPacket &, ClientBlobCache::Server::TransferBuilder &, std::function<void (BinaryDataOutput &)> &&); // _ZN21NetworkChunkPublisher18_serializeAndCacheER16LevelChunkPacketRN15ClientBlobCache6Server15TransferBuilderEOSt8functionIFvR16BinaryDataOutputEE
};
