#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../bedrock/io/BinaryStream"


class PotionMixDataEntry {

public:

    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
