#pragma once



class LevelChunkBuilderData {

public:
    class ChunkReadyForProcessingElement;

    ~LevelChunkBuilderData();
    LevelChunkBuilderData();
    class ChunkReadyForProcessingElement {

    public:
        ChunkReadyForProcessingElement(ChunkPos const&, int);
    };
};
