#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/io/BinaryStream.h"


class PotionMixDataEntry {

public:

    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
