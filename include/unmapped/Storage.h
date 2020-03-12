#pragma once



namespace LayerDetails {

    class Storage {

    public:
        Storage(LayerDetails::Storage &&);
        ~Storage();
        Storage(unsigned long);
    };
}
