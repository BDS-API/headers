#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../bedrock/io/BinaryStream"


class ContainerMixDataEntry {

public:

    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
