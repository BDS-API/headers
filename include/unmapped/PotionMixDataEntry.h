#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/io/ReadOnlyBinaryStream"


class PotionMixDataEntry {

public:

    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
