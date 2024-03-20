#pragma once

#include <iostream>
#include <vector>

namespace arcade {

    enum class Color {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,
    };

    enum class SpriteType {
        Image,
        Text,
        Sound
    };

    class Asset {
    public:
        unsigned int id;        // Unique identifier for the asset
        const std::string path;       // Path to the asset
    };

    class Image : public Asset {
    public:
        char text; // Text representation of the image
        Color color;
    };

    class Text {
    public:
        std::string str;
        Color color;
    };

    class Assets {
    public:
        std::vector<Asset> fonts;     // Null-terminated array of fonts
        std::vector<Image> images;    // Null-terminated array of images
        std::vector<Asset> sounds;    // Null-terminated array of sounds
    };

    /*
     * A position inside the game grid
     */
    class Position {
    public:
        float x;
        float y;
    };

    class Size {
    public:
        unsigned int width;
        unsigned int height;
    };

    class Sprite {
    public:
        Position pixelPosition;
        Size size;              // The asset should be scaled to fit the size in
        // the grid
        unsigned int asset_id;
        SpriteType type;
        Text text;
    };

    class Metadata {
    public:
        std::string gameName;
        Size gridSize;
    };

    enum class LibType {
        GAME,
        DISPLAY,
        MENU
    };
}