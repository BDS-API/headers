#pragma once

class MolangQueryFunction {

public:

    void MolangQueryFunction(std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, unsigned long);
    void MolangQueryFunction(MolangQueryFunction&&);
    void MolangQueryFunction(MolangQueryFunction const&);
};
