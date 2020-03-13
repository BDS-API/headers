#pragma once

#include <memory>


class PackMetadata {

public:
    ~PackMetadata(); // _ZN12PackMetadataD2Ev
    PackMetadata(); // _ZN12PackMetadataC2Ev
    PackMetadata(std::unique_ptr<EducationMetadata>); // _ZN12PackMetadataC2ESt10unique_ptrI17EducationMetadataSt14default_deleteIS1_EE
    bool hasEducationMetadata()const; // _ZNK12PackMetadata20hasEducationMetadataEv
    void getEducationMetadata()const; // _ZNK12PackMetadata20getEducationMetadataEv
};
