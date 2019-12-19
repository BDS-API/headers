#pragma once

class SubChunkBlockStorage {

public:
    virtual SubChunkBlockStorage::~SubChunkBlockStorage();
    virtual void asPalettedStorage(void);
    virtual void asPalettedStorage(void)const;

    void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*);
    void makeUniform(Block const&);
    void makeExpanded(SubChunkBlockStorage const&);
    void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long);
    void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat);
    void serialize(IDataOutput &, bool)const;
    void chooseTypeForBlockTypeCount(unsigned long);
    SubChunkBlockStorage(void);
};
