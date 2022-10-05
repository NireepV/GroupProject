#include "Headers/MapGen.h"

MapGen::MapGen(){
    gridLength = 16;
    setupTiles();
}

void MapGen::setupTiles(){

    std::vector<TileGen*> firstRow;
    firstRow.push_back(new TileGen("Images/marshConnectors.png",0,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",16,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",32,0));
    firstRow.push_back(new TileGen("Images/marshConnectors.png",48,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",64,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",80,0));
    firstRow.push_back(new TileGen("Images/marshConnectors.png",96,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",112,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",128,0));
    firstRow.push_back(new TileGen("Images/marshConnectors.png",144,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",160,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",176,0));
    firstRow.push_back(new TileGen("Images/marshConnectors.png",192,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",208,0));
    firstRow.push_back(new TileGen("Images/marshMiddle.png",224,0));
    firstRow.push_back(new TileGen("Images/marshConnectors.png",240,0));
    tiles.push_back(firstRow);

    std::vector<TileGen*> secondRow;
    secondRow.push_back(new TileGen("Images/marshSections.png",0,16));
    secondRow.push_back(new TileGen("Images/water.png",16,16));
    secondRow.push_back(new TileGen("Images/water.png",32,16));
    secondRow.push_back(new TileGen("Images/marshSections.png",48,16));
    secondRow.push_back(new TileGen("Images/water.png",64,16));
    secondRow.push_back(new TileGen("Images/water.png",80,16));
    secondRow.push_back(new TileGen("Images/marshSections.png",96,16));
    secondRow.push_back(new TileGen("Images/water.png",112,16));
    secondRow.push_back(new TileGen("Images/water.png",128,16));
    secondRow.push_back(new TileGen("Images/marshSections.png",144,16));
    secondRow.push_back(new TileGen("Images/water.png",160,16));
    secondRow.push_back(new TileGen("Images/water.png",176,16));
    secondRow.push_back(new TileGen("Images/marshSections.png",192,16));
    secondRow.push_back(new TileGen("Images/water.png",208,16));
    secondRow.push_back(new TileGen("Images/water.png",224,16));
    secondRow.push_back(new TileGen("Images/marshSections.png",240,16));
    tiles.push_back(secondRow);

    std::vector<TileGen*> thirdRow;
    for (size_t i = 0; i < 16; i++)
    {
        thirdRow.push_back(new TileGen("Images/water.png",16*i,i*2));
    }
    tiles.push_back(thirdRow);

    std::vector<TileGen*> fourthRow;
    for (size_t i = 0; i < 16; i++)
    {
        fourthRow.push_back(new TileGen("Images/water.png",16*i,i*3));
    }
    tiles.push_back(fourthRow);
    
    std::vector<TileGen*> fifthRow;
    for (size_t i = 0; i < 16; i++)
    {
        fifthRow.push_back(new TileGen("Images/water.png",16*i,i*4));
    }
    tiles.push_back(fifthRow);

    std::vector<TileGen*> sixthRow;
    for (size_t i = 0; i < 16; i++)
    {
        sixthRow.push_back(new TileGen("Images/water.png",16*i,i*5));
    }
    tiles.push_back(sixthRow);

    std::vector<TileGen*> seventhRow;
    for (size_t i = 0; i < 16; i++)
    {
        seventhRow.push_back(new TileGen("Images/water.png",16*i,i*6));
    }
    tiles.push_back(seventhRow);

    std::vector<TileGen*> eighthRow;
    for (size_t i = 0; i < 16; i++)
    {
        eighthRow.push_back(new TileGen("Images/sidewalk.png",16*i,i*7));
    }
    tiles.push_back(eighthRow);

    std::vector<TileGen*> ninthRow;
    for (size_t i = 0; i < 16; i++)
    {
        ninthRow.push_back(new TileGen("Images/roadLaneBottom.png",16*i,i*8));
    }
    tiles.push_back(ninthRow);

    std::vector<TileGen*> tenthRow;
    for (size_t i = 0; i < 16; i++)
    {
        tenthRow.push_back(new TileGen("Images/roadLaneTop.png",16*i,i*9));
    }
    tiles.push_back(tenthRow);

    std::vector<TileGen*> eleventhRow;
    for (size_t i = 0; i < 16; i++)
    {
        eleventhRow.push_back(new TileGen("Images/roadDividerBottom.png",16*i,i*10));
    }
    tiles.push_back(eleventhRow);

    std::vector<TileGen*> twelfthRow;
    for (size_t i = 0; i < 16; i++)
    {
        twelfthRow.push_back(new TileGen("Images/roadDividerTop.png",16*i,i*11));
    }
    tiles.push_back(twelfthRow);

    std::vector<TileGen*> thirteenthRow;
    for (size_t i = 0; i < 16; i++)
    {
        thirteenthRow.push_back(new TileGen("Images/roadLaneBottom.png",16*i,i*12));
    }
    tiles.push_back(thirteenthRow);

    std::vector<TileGen*> fourteenthRow;
    for (size_t i = 0; i < 16; i++)
    {
        fourteenthRow.push_back(new TileGen("Images/roadLaneTop.png",16*i,i*13));
    }
    tiles.push_back(fourteenthRow);

    std::vector<TileGen*> fifteenthRow;
    for (size_t i = 0; i < 16; i++)
    {
        fifteenthRow.push_back(new TileGen("Images/sidewalk.png",16*i,i*14));
    }
    tiles.push_back(fifteenthRow);

}

MapGen::~MapGen(){}
