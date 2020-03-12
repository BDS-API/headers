#pragma once

#include "../../block/unmapped/BlockPalette.h"
#include "../../../unmapped/Block.h"
#include "../../io/IDataInput.h"
#include "../../io/IDataOutput.h"


class SubChunkBlockStorage {

public:
    ~SubChunkBlockStorage();
    virtual bool asPalettedStorage()const;
    virtual bool asPalettedStorage();
    void makeExpanded(SubChunkBlockStorage const&);
//  void makeDeserialized(IDataInput &, BlockPalette const&, SubChunkFormat); //TODO: incomplete function definition
//  void makeType(SubChunkBlockStorage::Type, SubChunkBlockStorage const*); //TODO: incomplete function definition
    void makeUniform(Block const&);
    void chooseTypeForBlockTypeCount(unsigned long);
    void serialize(IDataOutput &, bool)const;
//  void makeFromRawData(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
    SubChunkBlockStorage();
};
