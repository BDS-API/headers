#pragma once

#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"


namespace ContainerMixDataEntry {

    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
};
