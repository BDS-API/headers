#pragma once

class PackMetadata {

public:

    void PackMetadata(void);
    void PackMetadata(std::unique_ptr<EducationMetadata, std::default_delete<EducationMetadata>>);
    bool hasEducationMetadata(void)const;
    void getEducationMetadata(void)const;
};
