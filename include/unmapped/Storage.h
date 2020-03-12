#pragma once



namespace LayerDetails {

    class Storage {

    public:
        ~Storage();
        Storage(unsigned long);
        Storage(LayerDetails::Storage &&);
    };
}
