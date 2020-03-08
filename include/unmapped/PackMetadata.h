#pragma once



class PackMetadata {

public:

    PackMetadata(void);
    PackMetadata(std::unique_ptr<EducationMetadata, std::default_delete<EducationMetadata>>);
    bool hasEducationMetadata()const;
    void getEducationMetadata()const;
};
