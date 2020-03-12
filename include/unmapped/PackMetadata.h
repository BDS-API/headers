#pragma once

#include <memory>


class PackMetadata {

public:
    bool hasEducationMetadata()const;
    PackMetadata(std::unique_ptr<EducationMetadata>);
    void getEducationMetadata()const;
    ~PackMetadata();
    PackMetadata();
};
