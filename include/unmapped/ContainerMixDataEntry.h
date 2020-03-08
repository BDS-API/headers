#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/io/ReadOnlyBinaryStream"


class ContainerMixDataEntry {

public:

    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
};
