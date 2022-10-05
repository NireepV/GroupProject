#include <SFML/Graphics.hpp>
#include <TileGen.h>
#include <vector>

#ifndef MAPGEN_H
#define MAPGEN_H

class MapGen
{
private:
    void setupTiles();
public:
    std::vector<std::vector< TileGen* >> tiles;
    int gridLength;
    MapGen();
    ~MapGen();
};



#endif 