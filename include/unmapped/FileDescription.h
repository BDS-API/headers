#pragma once

#include "./FileDescription.h"


namespace FilePickerSettings {

class FileDescription {

public:

    ~FileDescription();
    FileDescription(FilePickerSettings::FileDescription &&);
};

}