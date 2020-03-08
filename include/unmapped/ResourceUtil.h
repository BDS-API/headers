#pragma once



class ResourceUtil {

public:

    void pathFromString(gsl::basic_string_span<char const, -1l>);
    void stringFromPath(ResourceFileSystem);
};
