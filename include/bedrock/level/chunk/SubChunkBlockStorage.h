#pragma once



class SubChunkBlockStorage {

public:
    ~SubChunkBlockStorage(); // _ZN20SubChunkBlockStorageD2Ev
    virtual bool asPalettedStorage(); // _ZN20SubChunkBlockStorage17asPalettedStorageEv
    virtual bool asPalettedStorage()const; // _ZNK20SubChunkBlockStorage17asPalettedStorageEv
//  void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*); //TODO: incomplete function definition // _ZN20SubChunkBlockStorage8makeTypeENS_4TypeEPKS_
    void makeUniform(Block const&); // _ZN20SubChunkBlockStorage11makeUniformERK5Block
    void makeExpanded(SubChunkBlockStorage const&); // _ZN20SubChunkBlockStorage12makeExpandedERKS_
//  void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition // _ZN20SubChunkBlockStorage15makeFromRawDataE11buffer_spanIPK5BlockEmm
//  void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat); //TODO: incomplete function definition // _ZN20SubChunkBlockStorage16makeDeserializedER10IDataInputRK12BlockPalette14SubChunkFormat
    void serialize(IDataOutput &, bool)const; // _ZNK20SubChunkBlockStorage9serializeER11IDataOutputb
    void chooseTypeForBlockTypeCount(unsigned long); // _ZN20SubChunkBlockStorage27chooseTypeForBlockTypeCountEm
    SubChunkBlockStorage(); // _ZN20SubChunkBlockStorageC2Ev
};
