#pragma once

#include "../bedrock/io/IDataOutput"
#include "../bedrock/io/IDataInput"


class SubChunkBlockStorage {

public:
    virtual SubChunkBlockStorage::~SubChunkBlockStorage();
    virtual bool asPalettedStorage(void);
    virtual bool asPalettedStorage(void)const;

    void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*);
    void makeUniform(Block const&);
    void makeExpanded(SubChunkBlockStorage const&);
    void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long);
    void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat);
    void serialize(IDataOutput &, bool)const;
    void chooseTypeForBlockTypeCount(unsigned long);
    SubChunkBlockStorage(void);
};
