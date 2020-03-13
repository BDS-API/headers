#pragma once

#include <string>


class JigsawBlockInfo {

public:
    ~JigsawBlockInfo(); // _ZN15JigsawBlockInfoD2Ev
    JigsawBlockInfo(JigsawBlockInfo &&); // _ZN15JigsawBlockInfoC2EOS_
    JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string); // _ZN15JigsawBlockInfoC2ERK8BlockPosPK5BlockS5_NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_
};
