#pragma once



class SubChunkBlockStorage {

public:
    virtual bool asPalettedStorage();
    virtual bool asPalettedStorage()const;
    ~SubChunkBlockStorage();
//  void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
//  void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*); //TODO: incomplete function definition
    void chooseTypeForBlockTypeCount(unsigned long);
    void makeUniform(Block const&);
    void makeExpanded(SubChunkBlockStorage const&);
    void serialize(IDataOutput &, bool)const;
//  void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat); //TODO: incomplete function definition
    SubChunkBlockStorage();
};
