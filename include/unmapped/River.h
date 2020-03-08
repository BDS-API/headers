#pragma once



using namespace LayerFilters;

class River {

public:

    void operator()(LayerDetails::NeighborhoodReader<int, 1u, 1u> &)const;
};
