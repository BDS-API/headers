#pragma once

#include "./StreamDetails.h"


namespace MemoryMappedFileAccess {

class StreamDetails {

public:

    StreamDetails();
    ~StreamDetails();
    StreamDetails(MemoryMappedFileAccess::StreamDetails &&);
};

}