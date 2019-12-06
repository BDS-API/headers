#pragma once

class LayerFilters::River {

public:

    void operator()(LayerDetails::NeighborhoodReader<int, 1u, 1u> &)const;
};
