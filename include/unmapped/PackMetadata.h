#pragma once

#include <memory>
#include "./EducationMetadata.h"


class PackMetadata {

public:

    ~PackMetadata();
    PackMetadata();
    PackMetadata(std::unique_ptr<EducationMetadata, std::default_delete<EducationMetadata>>);
    bool hasEducationMetadata()const;
    void getEducationMetadata()const;
};
