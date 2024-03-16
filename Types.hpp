/*
** EPITECH PROJECT, 2024
** arcade_interface
** File description:
** Game assets
*/

#pragma once

namespace arcade {

    class Asset {
    public:
        unsigned int id;        // Unique identifier for the asset
        const char *path;       // Path to the asset
    };

    class Image : public Asset {
    public:
        const char *text;       // Text representation of the image
    };

    class Assets {
    public:
        const Asset *fonts;     // Null-terminated array of fonts
        const Asset *images;    // Null-terminated array of images
        const Asset *sounds;    // Null-terminated array of sounds
    };

    /*
     * A position inside the game grid
     */
    struct Position {
        float x;
        float y;
    };

    struct Size {
        unsigned int width;
        unsigned int height;
    };

    struct Sprite {
        Position pixelPosition;
        Size size;              // The asset should be scaled to fit the size in
                                // the grid
        unsigned int asset_id;
    };

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

}
