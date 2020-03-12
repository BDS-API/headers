#pragma once

#include "EducationMetadata.h"
#include <memory>


class PackMetadata {

public:
    PackMetadata();
    void getEducationMetadata()const;
    bool hasEducationMetadata()const;
    ~PackMetadata();
    PackMetadata(std::unique_ptr<EducationMetadata>);
};
