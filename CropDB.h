#pragma once
#include "CropInfo.h"

class CropDB {
    public:
        CropDB();
        void reload();
        void printToFile();
        void insert();
        void add();
        void remove();
        void search();
        void print();
        void dbMenu();
        ~CropDB();
    private:
        int getValidIndex();
        void readFile(const char fileName[]);
        void print(bool searchRange, double min, double max);
        void expand();
        void shrink();
        // enum {MAX_CROPS = 500};
        // CropInfo crops[MAX_CROPS];
        CropInfo *crops;
        int numCrops;
};
